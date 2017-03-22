/**********************************************************
  PROGRAM:      �f�[�^�^�C�v��`
  NAME:         meltype.h
  DESCRIPTION:  

  Copyright (C) 1994 Mitsubishi Electric Corporation
  All Rights Reserved
**********************************************************/

#ifndef	INCmeltypeh
#define	INCmeltypeh

#ifdef	_WIN32																	/* MA0-A007 */
#include	<windows.h>															/* MA0-A007 */
#else																			/* MA0-A007 */
#include	<winhead.h>															/* MA0-A007 */
#endif																			/* MA0-A007 */
#include	"g_check.h"

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

/********************************************************/
/* ----- �^�C�v�Ȃ� -----------------------------------	*/
/********************************************************/
#define	T_NOTYPE		0x0						/* �f�[�^�ϊ���"�ϊ��Ȃ�"���Ɏg�p	*/


/********************************************************/
/* ----- ���l�^�f�[�^�^�C�v��`	-----------------------	*/
/********************************************************/
#define	T_CHAR			0x1						/* 1�o�C�g�����^ */
#define	T_CHAR_SIZE		(sizeof(char))

#define	T_SHORT			0x2						/* 2�o�C�g�����^ */
#define	T_SHORT_SIZE	(sizeof(short))

#define	T_LONG			0x3						/* 4�o�C�g�����^ */
#define	T_LONG_SIZE		(sizeof(long))

#define	T_DLONG			0x4						/* 8�o�C�g�����^ */
#define	T_DLONG_SIZE	(8)

#define	T_DOUBLE		0x5						/* �����^ */
#define	T_DOUBLE_SIZE	(sizeof(double))

#define	T_FLOATBIN		0x6						/* �W�o�C�g�����^ */
typedef struct {
	short	nIntDataNos;		/* ���������� */ 
	short	nDecDataNos;		/* ���������� */
	long	lOption;			/* �I�v�V���� 0:�w���\���Ȃ� 1:�w���\�� */
	double	dData;				/* �f�[�^�̈� */
} FLOATBIN;
#define	T_FLOATBIN_SIZE	(sizeof(FLOATBIN))
typedef	FLOATBIN FAR	*LPFLOATBIN;


/********************************************************/
/* ----- �����^�f�[�^�^�C�v��`	-----------------------	*/
/********************************************************/
#define	T_STR			0x10					/* ������^	*/
#define	T_DECSTR		0x11					/* 10�i����������^ */
#define	T_HEXSTR		0x12					/* 16�i��������^	*/
#define	T_BINSTR		0x13					/* 2�i��������^ */
#define	T_FLOATSTR		0x14					/* ����������^ */
#define	T_WSTR			0x15					/* ������^(UNICODE)	*/		/* MA0-A007 */
#define	T_DECWSTR		0x16					/* 10�i����������^(UNICODE) */	/* MA0-A007 */
#define	T_HEXWSTR		0x17					/* 16�i��������^(UNICODE)	*/	/* MA0-A007 */
#define	T_BINWSTR		0x18					/* 2�i��������^(UNICODE) */	/* MA0-A007 */
#define	T_FLOATWSTR		0x19					/* ����������^(UNICODE) */		/* MA0-A007 */
#define T_CHARBUFF		0x1a					/* �P��������^ */

typedef struct {
	long	lBuffSize;			/* �f�[�^�̈�̃T�C�Y   */
	LPSTR	lpszBuff;			/* �f�[�^�̈�̃|�C���^ */
} STRINGTYPE;
typedef	STRINGTYPE FAR	*LPSTRINGTYPE;

typedef struct {																/* MA0-A007 */
	long	lBuffSize;			/* �f�[�^�̈�̃T�C�Y   */						/* MA0-A007 */
	LPWSTR	lpszBuff;			/* �f�[�^�̈�̃|�C���^ */						/* MA0-A007 */
} WSTRINGTYPE;																	/* MA0-A007 */
typedef	WSTRINGTYPE FAR	*LPWSTRINGTYPE;											/* MA0-A007 */

typedef struct {
	short	nIntDataNos;		/* ���������� */ 
	short	nDecDataNos;		/* ���������� */
	long	lOption;			/* �I�v�V���� */
	long	lBuffSize;			/* �f�[�^�̈�̃T�C�Y   */
	LPSTR	lpszBuff;			/* �f�[�^�̈�̃|�C���^ */
} FLOATSTR;
typedef	FLOATSTR FAR	*LPFLOATSTR;

typedef struct {																/* MA0-A007 */
	short	nIntDataNos;		/* ���������� */ 								/* MA0-A007 */
	short	nDecDataNos;		/* ���������� */								/* MA0-A007 */
	long	lOption;			/* �I�v�V���� */								/* MA0-A007 */
	long	lBuffSize;			/* �f�[�^�̈�̃T�C�Y   */						/* MA0-A007 */
	LPWSTR	lpszBuff;			/* �f�[�^�̈�̃|�C���^ */						/* MA0-A007 */
} FLOATWSTR;																	/* MA0-A007 */
typedef	FLOATWSTR FAR	*LPFLOATWSTR;																/* MA0-A007 */

/* �I�v�V������` */
#define FSTR_FILL_ZERO	0x1		/* �������[���l�߂��s�Ȃ� */
#define FSTR_ADD_PLUS	0x2		/* ���̐��̏ꍇ�{������t���� */


/********************************************************/
/* ----- Unsigned ���l�^�f�[�^�^�C�v��`	-----------	*/
/********************************************************/
#define	T_UCHAR			0x21					/* 1�o�C�gunsigned �����^	*//* P1X-A006M */
#define	T_USHORT		0x22					/* 2�o�C�gunsigned �����^	*//* P1X-A006M */
#define	T_ULONG			0x23					/* 4�o�C�gunsigned �����^	*//* P1X-A006M */


/********************************************************/
/* ----- ����^�f�[�^�^�C�v��`	-----------------------	*/
/********************************************************/

#define	T_CLCTDATA		0x100					/* �ꊇ�f�[�^�ǂݏo���p */
typedef struct {
	long	lId;					/* �ǂݎ����ID */
	char	szReadData[32];			/* �ǂݎ�����f�[�^	*/
} CLCTDATA;

#define	T_CLCTDATA_SIZE	(sizeof(CLCTDATA))

typedef	CLCTDATA FAR	*LPCLCTDATA;


#define	T_GETPRGPOINT	0x101					/* �v���O�������s�ʒu�擾�p	*/

typedef struct {
	char	szPrgName[10];			/* �v���O������ */
	long	lPoint;					/* ���s���̃|�C���^	*/
} PRGPOINT;
typedef	PRGPOINT FAR	*LPPRGPOINT;

typedef struct{
	long	lPrgpointNos;			/* �m�ۂ���PRGPINT��	*/
	LPPRGPOINT lpPrgpoint;			/* PRGPINT�̃|�C���^ */
}GETPRGPOINT;
    
typedef	GETPRGPOINT FAR	*LPGETPRGPOINT;


#define	T_GETPRGBLOCK	0x102		/* ���s���v���O�����擾�p */

typedef struct {
	long	lCurrentBlockNum;		/* ���s���̃u���b�N				 */
	                                /* (�擾�����f�[�^���̃u���b�N)  */
	                                /*    0:�^�]���łȂ�			   */
	                                /*    1:1�u���b�N��				*/
	                                /*    2:2�u���b�N��				*/
	long	lPrgDataSize;			/* lpszPrgData�̃o�b�t�@�T�C�Y	 */
	LPSTR	lpszPrgData;			/* �v���O�������i�[����o�b�t�@  */
} GETPRGBLOCK;
typedef	GETPRGBLOCK FAR	*LPGETPRGBLOCK;

#define T_BUFF          0x103                   /* �ėp�o�b�t�@�^  */

typedef struct{
    long    lBuffSize;                          /* lpBuff�̃o�b�t�@�T�C�Y   */
    LPVOID  lpBuff;                             /* �o�b�t�@�̃|�C���^  */
}BUFFTYPE;

typedef BUFFTYPE    FAR *LPBUFFTYPE;


typedef struct {
	long	lAddress;
	long	lSectionNum;
	long	lSubSectionNum;
	long	lAxisFlag;
	long	lDataType;					/* �f�[�^�^�C�v						 *//* P0Y-A013A */
	long	lPriority;
} REGLUMPMODAL;																	/* MA0-A006 */
typedef	REGLUMPMODAL FAR	*LPREGLUMPMODAL;									/* MA0-A006 */

typedef struct {																/* MA0-A006 */
	long	lAddress;															/* MA0-A006 */
	long	lSectionNum;														/* MA0-A006 */
	long	lSubSectionNum;														/* MA0-A006 */
	long	lPriority;															/* MA0-A006 */
} EXREGISTMODAL;																/* MA0-A006 */
typedef	EXREGISTMODAL FAR	*LPEXREGISTMODAL;									/* MA0-A006 */


/*--------------*/
/* T_LUMP�^�C�v */
/*--------------*/
#define	T_LUMP		0x104				/* �����f�[�^�擾�E�ݒ�p */
typedef struct {
	long	lDataType;					/* �f�[�^�^�C�v			*/
	long	lDataNos;					/* �f�[�^��			*/
	LPVOID	lpBuff;						/* �f�[�^�o�b�t�@�̃|�C���^	*/
} LUMPTYPE;
typedef	LUMPTYPE FAR	*LPLUMPTYPE;


/*-----------------------------*/
/*���s���v���O�����擾�^�C�v�Q */
/*-----------------------------*/
#define	T_GETPRGBLOCK2	0x105			/* ���s���v���O�����擾�p 		*/

typedef struct {
	long	lStartCurrentBlock;			/* ���s���̃u���b�N�̐擪		*/
	                            	    /* (�擾�����f�[�^���̃u���b�N) */
	                            	    /*    0:�^�]���łȂ�		 	*/
	                            	    /*    1:1�u���b�N��				*/
	                            	    /*    2:2�u���b�N��				*/
	long	lEndCurrentBlock;			/* ���s���̃u���b�N�̏I��		*/
	                            	    /* (�擾�����f�[�^���̃u���b�N) */
	                            	    /*    0:�^�]���łȂ�		 	*/
	                            	    /*    1:1�u���b�N��				*/
	                            	    /*    2:2�u���b�N��				*/
	long	lPrgDataSize;				/* lpszPrgData�̃o�b�t�@�T�C�Y	*/
	LPSTR	lpszPrgData;				/* �v���O�������i�[����o�b�t�@ */
} GETPRGBLOCK2;
typedef	GETPRGBLOCK2 FAR	*LPGETPRGBLOCK2;

/********************************************************/
/* ----- NC�t�@�C���V�X�e���f�[�^�^�C�v��`	-----------	*/
/********************************************************/
#define	T_STAT		0x106				/* NC�t�@�C���V�X�e�����擾�p	*/
#define	T_DIR		0x107				/* NC�t�@�C���V�X�e��			*/
										/*		�f�B���N�g�����擾�p	*/

/********************************************************/
/* ----- �A���[�����b�Z�[�W�擾�p��`	-------------	*/
/********************************************************/
typedef struct {
	long	lSystem;					/* �擾�A���[���̌n��			*/
	long	lAlarmType;					/* �擾�A���[���̏ڍ׎��		*/
	long	lBuffSize;					/* lpszBuff�̃o�b�t�@�T�C�Y		*/
	LPSTR	lpszBuff;					/* ���b�Z�[�W���i�[����			*/
										/* �o�b�t�@�ւ̃|�C���^			*/
} ALARMMSG;
typedef	ALARMMSG FAR	*LPALARMMSG;

#define	T_ALARMMSG		0x108			/* �A���[�����b�Z�[�W			*/
#define	T_ALARMMSG2		0x10e			/* �A���[�����b�Z�[�W2			*//* MA0-A045 */

/********************************************************/
/* ----- �`�F�b�N�`��f�[�^�擾�p��`	-------------	*/
/********************************************************/
#define T_CHECKDRAW		0x109											  /* P0Y-A038 */
typedef	CheckDraw FAR	*LPCHECKDRAW;


/********************************************************/
/* ----- UNICODE�p�v���O�����擾�p��`	-------------	*/
/********************************************************/
#define	T_WGETPRGBLOCK	0x10a		/* ���s���v���O�����擾�p(UNICODE) */		/* MA0-A007 */

typedef struct {																/* MA0-A007 */
	long	lCurrentBlockNum;		/* ���s���̃u���b�N				 */			/* MA0-A007 */
	                                /* (�擾�����f�[�^���̃u���b�N)  */			/* MA0-A007 */
	                                /*    0:�^�]���łȂ�			   */		/* MA0-A007 */
	                                /*    1:1�u���b�N��				*/			/* MA0-A007 */
	                                /*    2:2�u���b�N��				*/			/* MA0-A007 */
	long	lPrgDataSize;			/* lpszPrgData�̃o�b�t�@�T�C�Y	 */			/* MA0-A007 */
	LPWSTR	lpszPrgData;			/* �v���O�������i�[����o�b�t�@  */			/* MA0-A007 */
} WGETPRGBLOCK;																	/* MA0-A007 */
typedef	WGETPRGBLOCK FAR	*LPWGETPRGBLOCK;									/* MA0-A007 */

/********************************************************/
/* ----- UNICODE�p�v���O�����擾�p��`2	-------------	*/
/********************************************************/
#define	T_WGETPRGBLOCK2	0x10b			/* ���s���v���O�����擾�p(UNICODE) */	/* MA0-A007 */

typedef struct {																/* MA0-A007 */
	long	lStartCurrentBlock;			/* ���s���̃u���b�N�̐擪		*/		/* MA0-A007 */
	                            	    /* (�擾�����f�[�^���̃u���b�N) */		/* MA0-A007 */
	                            	    /*    0:�^�]���łȂ�		 	*/		/* MA0-A007 */
	                            	    /*    1:1�u���b�N��				*/		/* MA0-A007 */
	                            	    /*    2:2�u���b�N��				*/		/* MA0-A007 */
	long	lEndCurrentBlock;			/* ���s���̃u���b�N�̏I��		*/		/* MA0-A007 */
	                            	    /* (�擾�����f�[�^���̃u���b�N) */		/* MA0-A007 */
	                            	    /*    0:�^�]���łȂ�		 	*/		/* MA0-A007 */
	                            	    /*    1:1�u���b�N��				*/		/* MA0-A007 */
	                            	    /*    2:2�u���b�N��				*/		/* MA0-A007 */
	long	lPrgDataSize;				/* lpszPrgData�̃o�b�t�@�T�C�Y	*/		/* MA0-A007 */
	LPWSTR	lpszPrgData;				/* �v���O�������i�[����o�b�t�@ */		/* MA0-A007 */
} WGETPRGBLOCK2;																/* MA0-A007 */
typedef	WGETPRGBLOCK2 FAR	*LPWGETPRGBLOCK2;									/* MA0-A007 */

/****************************************************************/
/* ----- UNICODE�p�A���[�����b�Z�[�W�擾�p��`	-------------	*/
/****************************************************************/
#define	T_WALARMMSG		0x10c			/* �A���[�����b�Z�[�W(UNICODE)	*/		/* MA0-A007 */
#define	T_WALARMMSG2	0x10f			/* �A���[�����b�Z�[�W2(UNICODE)	*/		/* MA0-A045 */

typedef struct {																/* MA0-A007 */
	long	lSystem;					/* �擾�A���[���̌n��			*/		/* MA0-A007 */
	long	lAlarmType;					/* �擾�A���[���̏ڍ׎��		*/		/* MA0-A007 */
	long	lBuffSize;					/* lpszBuff�̃o�b�t�@�T�C�Y		*/		/* MA0-A007 */
	LPWSTR	lpszBuff;					/* ���b�Z�[�W���i�[����			*/		/* MA0-A007 */
										/* �o�b�t�@�ւ̃|�C���^			*/		/* MA0-A007 */
} WALARMMSG;																	/* MA0-A007 */
typedef	WALARMMSG FAR	*LPWALARMMSG;											/* MA0-A007 */

/****************************************************************************/
/*	�m�b�V���A���|�[�g���ݒ�p�\����										*/
/****************************************************************************/
#define	T_SERIAL_SETUP	0x10d		/* �m�b�V���A���|�[�g���ݒ�			*/	/* MA0-A041 */

typedef struct {																/* MA0-A041 */
	long	lBaudRate;				/* �{�[���[�g�ݒ�						*/	/* MA0-A041 */
									/*	110, 300, 600, 1200, 2400, 4800,	*/	/* MA0-A041 */
									/*	9600, 19200							*/	/* MA0-A041 */
	char	cByteSize;				/* �f�[�^�r�b�g���ݒ�	7, 8			*/	/* MA0-A041 */
	char	cParityBit;				/* �p���e�B�r�b�g�ݒ�					*/	/* MA0-A041 */
									/*	0:�����i�`�F�b�N�����j				*/	/* MA0-A041 */
									/*	1:�L���i�`�F�b�N�L��j				*/	/* MA0-A041 */
	char	cEvenOdd;				/* �/�����p���e�B�ݒ�				*/	/* MA0-A041 */
									/*	1:��`�F�b�N, 2:�����`�F�b�N		*/	/* MA0-A041 */
	char	cStopBit;				/* �X�g�b�v�r�b�g�ݒ�					*/	/* MA0-A041 */
									/*	0:1bit, 1:1.5bit, 2:2bit			*/	/* MA0-A041 */
	char	cHandShake;				/* �n���h�V�F�B�N�ݒ�					*/	/* MA0-A041 */
									/*	0:RTS/CTS����						*/	/* MA0-A041 */
									/*	1:�n���h�V�F�C�N����				*/	/* MA0-A041 */
									/*	2:DC�R�[�h����						*/	/* MA0-A041 */
	char	cDCcodeParity;			/* DC�R�[�h�p���e�B�ݒ�					*/	/* MA0-A041 */
									/*	0:Xon-off�p���e�B �I�t				*/	/* MA0-A041 */
									/*	1:Xon-off�p���e�B �I��				*/	/* MA0-A041 */
	char	cDRoff;					/* DR�`�F�b�N���� 0:�`�F�b�N�L�� 1:����	*/	/* MA0-A041 */
	char	cOutBufSize;			/* �o�̓o�b�t�@�T�C�Y					*/	/* MA0-A041A */
									/*	0:250�o�C�g							*/	/* MA0-A041A */
									/*	1:1�o�C�g							*/	/* MA0-A041A */
									/*	2:4�o�C�g							*/	/* MA0-A041A */
									/*	3:8�o�C�g							*/	/* MA0-A041A */
									/*	4:16�o�C�g							*/	/* MA0-A041A */
									/*	5:64�o�C�g							*/	/* MA0-A041A */
									/*  ���̑�:250�o�C�g					*/	/* MA0-A041A */
	long	lTimeout;				/* �^�C���A�E�g����	(x100ms)			*/	/* MA0-A041 */
	char	cTermType;				/* �^�[�~�l�[�^�^�C�v�ݒ�	1:EOB, 3:EOR*/	/* MA0-A041 */
	char	cDC2DC4;				/* DC2/DC4�o�͐ݒ�						*/	/* MA0-A041 */
									/*	bit0: DC2�R�[�h�o��					*/	/* MA0-A041 */
									/*	bit1: DC4�R�[�h�o��					*/	/* MA0-A041 */
	char	cCRout;					/* CR�o�͐ݒ�	0:���o��, 1:�o��		*/	/* MA0-A041 */
	char	cEIAout;				/* EIA�o�͐ݒ�	0:ISO�o��, 1:EIA�o��	*/	/* MA0-A041 */
	short	nFeedChar;				/* �t�B�[�h���ݒ�	0-250				*/	/* MA0-A041 */
	char	cParityV;				/* �p���e�BV�`�F�b�N�ݒ�				*/	/* MA0-A041 */
									/*	0:�`�F�b�N����, 1:�`�F�b�N�L��		*/	/* MA0-A041 */
	char	cAscii;					/* �f�[�^ASCII�ݒ�						*/	/* MA0-A041 */
									/*	0:ISO or EIA, 1:ASCII				*/	/* MA0-A041 */
	char	cEIAcode1;				/*'[' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
	char	cEIAcode2;				/*']' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
	char	cEIAcode3;				/*'#' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
	char	cEIAcode4;				/*'*' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
	char	cEIAcode5;				/*'=' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
	char	cEIAcode6;				/*':' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
	char	cEIAcode7;				/*'$' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
	char	cEIAcode8;				/*'!' -> EIA��փR�[�h�ݒ�				*/	/* MA0-A041 */
} SERIAL_SETUP;																	/* MA0-A041 */
typedef	SERIAL_SETUP FAR	*LPSERIAL_SETUP;									/* MA0-A041 */


#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/*INCmeltypeh*/
