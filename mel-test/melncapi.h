/**********************************************************
  PROGRAM:      �R�}���h��`
  NAME:         melncapi.h
  DESCRIPTION:  

  Copyright (C) 1994 Mitsubishi Electric Corporation
  All Rights Reserved
**********************************************************/

#ifndef	INCmelncapih
#define	INCmelncapih

#ifdef	_WIN32																	//MA0-A040
#include	<windows.h>															//MA0-A040
#else																			//MA0-A040
#include 	"vxWorks.h"															//MA0-A050
#include	"winhead.h"															//MA0-A040
#endif																			//MA0-A040

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

/* ----- NC API�Ŏg�p����}�N���@-------------------	*/
/* -- �A�h���X�֘A --			*/
#define ADDR_TYPE	(long)
/* �R���g���[������ */
#define ADR_AXIS(n)			((ADDR_TYPE(n) << 0) & 0x000000ff)		/* ���̎w��						  */
#define ADR_SYSTEM(n)		((ADDR_TYPE(n) << 8) & 0x0000ff00)		/* �n���i�O���[�v�ԍ��j�̎w��	  */
#define ADR_MACHINE(n)		((ADDR_TYPE(n) << 24) & 0xff000000)		/* �R���g���[���̎w��			  */
#define	ADR_BASIS(n)		((ADDR_TYPE(n) << 16) & 0x00010000)		/* ��{�n���̎w��				  *//* MA0-A029 */
#define	ADR_GRFCHECK(n)		((ADDR_TYPE(n) << 17) & 0x00020000)		/* �O���t�B�b�N�`�F�b�N�̎w��	  *//* MA0-A029 */
#define	ADR_FORCE_WRITE		((ADDR_TYPE(1) << 18) & 0x00040000)		/* �����������݃��[�h�̎w��	  	  *//* MA0-A051 *//* MA0-A051A */

#define ADR_GET_AXIS(n)		((ADDR_TYPE(n) >> 0) & 0x000000ff)		/* ���w��̎擾					  */
#define ADR_GET_SYSTEM(n)	((ADDR_TYPE(n) >> 8) & 0x000000ff)		/* �n���i�O���[�v�ԍ��j�w��̎擾 */
#define ADR_GET_MACHINE(n)	((ADDR_TYPE(n) >> 24) & 0x000000ff)		/* �R���g���[���w��̎擾		  */
#define ADR_GET_BASIS(n)	((ADDR_TYPE(n) >> 16) & 0x00000001)		/* ��{�n���̎擾				  *//* MA0-A008C *//* MA0-A025 *//* MA0-A029 */
#define	ADR_GET_GRFCHECK(n)	((ADDR_TYPE(n) >> 17) & 0x00000001)		/* �O���t�B�b�N�`�F�b�N�̎w��擾 *//* MA0-A029 */
#define	ADR_GET_FORCE_WRITE	((ADDR_TYPE(1) >> 18) & 0x00000001)		/* �����������݃��[�h�̎w��	  	  *//* MA0-A051 *//* MA0-A051A */

/* NC-Xj,NC-Xk��p */
#define ADR_BASE_SYSTEM		((ADDR_TYPE(0) << 16) & 0x00ff0000)		/* ��{�n���̎w�� */
#define ADR_CROSS_CURRENT	((ADDR_TYPE(1) << 16) & 0x00ff0000)		/* �N���X�J�����g�n���̎w��	*/
#define ADR_GET_CROSS_CURRENT	((ADDR_TYPE(1) >> 16) & 0x000000ff)	/* �N���X�J�����g�n���w��̎擾 */

/* �}�V���R���g���[�����f��W��p */
#define ADR_OPE_DRIVE(n)	((ADDR_TYPE(n) << 16) & 0x00ff0000)		/* �^�]�ԍ��̎w�� */
#define ADR_GET_OPE_DRIVE(n)	((ADDR_TYPE(n) >> 16) & 0x000000ff)	/* �^�]�ԍ��w��̎擾 */

/* �O�����h�w�� */
#define ADR_GROUND(n)		((ADDR_TYPE(n) << 20) & 0x00f00000)		/* �O�����h(FORE/BACK)�̎w��	 *//* MA0-A008C *//* MA0-A025 */
#define ADR_GET_GROUND(n)	((ADDR_TYPE(n) >> 20) & 0x0000000f)		/* �O�����h(FORE/BACK)�w��̎擾 *//* MA0-A008C *//* MA0-A025 */

/* ----- �e�R�}���h�Ŏg�p����}�N���@-------------------	*/
/* -- System�֘A --			*/
/* melIoctl */
#define	DEV_SET_RTIMEOUT		0x001		/* ���[�h�^�C���A�E�g�̐ݒ�					*/
#define	DEV_SET_WTIMEOUT		0x002		/* ���C�g�^�C���A�E�g�̐ݒ�					*/
#define	DEV_CANCEL_RWAIT		0x003		/* ���[�h�҂���ԉ���						*/
#define	DEV_CANCEL_WWAIT		0x004		/* ���C�g�҂���ԉ���						*/
#define	DEV_CHECK_EXIST			0x005		/* ������Ԃ̊m�F							*/
#define	DEV_SET_COMMTIMEOUT		0x005		/* �ʐM�^�C���A�E�g�l�ݒ�					*/	/* MA0-A008 */
#define	DEV_GET_COMMTIMEOUT		0x006		/* �ʐM�^�C���A�E�g�l�擾					*/	/* MA0-A008 */
#define	DEV_SWITCH_KEYDATA		0x007		/* �L�[���엚���̑��M��؂�ւ�				*/	/* MA0-A009 */
#define	DEV_GET_COMMADDRESS		0xFEF		/* melcfg.ini��IP�A�h���X�擾�A�h���X�擾	*/	/* MA0-A040 */
#define	DEV_SET_COMMADDRESS		0xFFF		/* �A�h���X�ݒ�								*/	/* MA0-A008 */
#define DEV_SET_EXCLUSIVETIMEOUT	0x00F	/* �r������^�C���A�E�g���Ԑݒ�				*/	/* MA0-A057 */
#define DEV_GET_EXCLUSIVETIMEOUT	0x010	/* �r������^�C���A�E�g���Ԏ擾				*/	/* MA0-A057 */
#define	DEV_SET_CONTROLLER		0x101		/* NC�V�X�e����ʂ̐ݒ�						*/	/* MA0-A057 */
#define DEV_SET_REMOTEMODE		0x103		/* ���u���샂�[�h�̐ݒ�						*/	/* MA0-A057 */
#define DEV_GET_REMOTEMODE		0x104		/* ���u���샂�[�h�̎擾						*/	/* MA0-A057 */
#define	DEV_SET_CONNECTTIMEOUT	0x105		/* �ڑ��^�C���A�E�g�l�̐ݒ�					*/	/* MA0-A057 */
#define	DEV_GET_CONNECTTIMEOUT	0x106		/* �ڑ��^�C���A�E�g�l�̎擾					*/	/* MA0-A057 */
#define	DEV_SET_CACHEMAX		0x107		/* �f�[�^���[�h�L���b�V���f�[�^�ő���ݒ�	*/	/* MA0-A057 */
#define	DEV_GET_CACHEMAX		0x108		/* �f�[�^���[�h�L���b�V���f�[�^�ő���擾	*/	/* MA0-A057 */
#define	DEV_SET_PD_ENABLE		0x10B		/* PC�_�C���N�g�^�]�@�\�g�p�L���̐ݒ�		*/	/* MA0-A057 */
#define	DEV_SET_LOGTYPE			0x111		/* �ُ�ʒm���@�̐ݒ�						*/	/* MA0-A057 */
#define	DEV_GET_LOGTYPE			0x112		/* �ُ�ʒm���@�̎擾						*/	/* MA0-A057 */
#define	DEV_SET_LOGDIR			0x113		/* �ُ�ʒm���O�t�@�C���o�͐�̐ݒ�			*/	/* MA0-A057 */
#define	DEV_GET_LOGDIR			0x114		/* �ُ�ʒm���O�t�@�C���o�͐�̎擾			*/	/* MA0-A057 */
#define	SIO_SET_BAUDRATE		0x201		/* �{�[���C�g�ݒ�							*/
#define	SIO_SET_CHARSIZE		0x202		/* �L�����N�^���ݒ�							*/
#define	SIO_SET_PARITY			0x203		/* �p���e�B�r�b�g�ݒ�						*/
#define	SIO_SET_STOPBITS		0x204		/* �X�g�b�v�r�b�g�ݒ�						*/
#define	SIO_ENABLE_XONXOFF		0x205		/* ���o�͎���XON/XOFF�̗L��/�����ؑ�		*/
#define	SIO_SEND_CHARACTER		0x206		/* 1�L�����N�^�f�[�^���M					*/
#define SIO_GET_PARA			0x207		/* �R���g���[�����V���A���|�[�g�ݒ�l�擾	*/
#define CMD_ENABLE_BACKGROUND	0x1001		/* �o�b�N�O���E���h�`�F�b�N�@�\				*/	/* MA0-A026 */

/* DEV_SET_COMMADDRESS�ADEV_GET_COMMADDRESS�p */
typedef	union																			  /* MA0-A008C */
{																						  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Isa;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Pci;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Com;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		char	IPAddr[16];																  /* MA0-A008C *//* MA0-A040 */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[12];																  /* MA0-A008C *//* MA0-A040 */
	} Tcp;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Mac;																				  /* MA0-A008C */
	struct																				  /* MA0-A039 */
	{																					  /* MA0-A039 */
		DWORD	dwChannel;																  /* MA0-A039 */
		DWORD	dwNetworkNo;															  /* MA0-A039 */
		DWORD	dwPcNo;																	  /* MA0-A039 */
		DWORD	dwMultiCpuNo;															  /* MA0-A039 */
		char	dummy[16];																  /* MA0-A039 *//* MA0-A040 */
	} Got;																				  /* MA0-A039 */
}																						  /* MA0-A008C */
APIDEVICE, *LPAPIDEVICE;																  /* MA0-A008C */

typedef struct {																		  /* MA0-A008C */
	DWORD			dwDeviceType;			/* �f�o�C�X���								*//* MA0-A008C */
	APIDEVICE		uniDeviceInfo;			/* �f�o�C�X���								*//* MA0-A008C */
} MELDEVICEDATA;																		  /* MA0-A008C */
typedef	MELDEVICEDATA FAR	*LPMELDEVICEDATA;											  /* MA0-A008C */

#define		DEVICETYPE_PC	0				/* PC										*//* MA0-A008C */
#define		DEVICETYPE_ISA	1				/* ISA�o�X�o�R								*//* MA0-A008C */
#define		DEVICETYPE_PCI	2				/* PCI�o�X�o�R								*//* MA0-A008C */
#define		DEVICETYPE_COM	3				/* COM�|�[�g�o�R							*//* MA0-A008C */
#define		DEVICETYPE_TCP	4				/* TCP�\�P�b�g�o�R							*//* MA0-A008C */
#define		DEVICETYPE_MAC	5				/* MAC�P�[�u���o�R							*//* MA0-A008C */

#define		DEVICETYPE_GOT	10				/* GOT�o�R									*//* MA0-A039 */

/* DEV_SET_CACHEMAX, DEV_GET_CACHEMAX�p	*/
typedef struct {																		  /* MA0-A057 */
	DWORD	dwCacheCount;					/* ���[�h�L���b�V���ő�o�^��				*//* MA0-A057 */
	DWORD	dwCacheCancelUnit;				/* ���[�h�L���b�V��������					*//* MA0-A057 */
} MELCACHEMAXDATA;																		  /* MA0-A057 */
typedef	MELCACHEMAXDATA FAR	*LPMELCACHEMAXDATA;											  /* MA0-A057 */

/* -- �t�@�C���A�N�Z�X�֘A --		*/

/* -- �f�[�^�A�N�Z�X --			*/

/* -- �^�]���� --			*/
/* melReset */																		  
#define	M_OPE_NC_RESET			0x01		/* NC���Z�b�g&�����C���h			*/
#define	M_OPE_NC_RESET1			0x02		/* NC���Z�b�g1						*/
#define	M_OPE_NC_RESET2			0x03		/* NC���Z�b�g2						*/

#define	M_OPE_MC_PROG_RESET		0x10		/* ���[�V�����v���O�����^�]���Z�b�g	*/
#define	M_OPE_MC_MANUAL_RESET	0x11		/* �蓮�^�]���Z�b�g					*/

/* melSetBlockStopMode */
#define	M_OPE_BLKSTOP_OFF		0x00		/* �V���O���u���b�N��~���Ȃ�		*/
#define	M_OPE_BLKSTOP_ON		0x01		/* �V���O���u���b�N��~����			*/

/* melSetOperationMode */
#define	M_OPE_OPEMODE_MEM		0x01		/* �������^�]���[�h					*/
#define	M_OPE_OPEMODE_MDI		0x02		/* MDI�^�]���[�h					*/
#define	M_OPE_OPEMODE_JOG		0x03		/* JOG���[�h						*/
#define	M_OPE_OPEMODE_REF		0x04		/* ���_���A���[�h					*/
#define	M_OPE_OPEMODE_HNDL		0x05		/* �n���h�����[�h					*/
#define	M_OPE_OPEMODE_STEP		0x06		/* �X�e�b�v���胂�[�h				*/

/* melSetOverrideValue */

/* melSetManualFeedSpeed */

/* melSetHandleMagnification */

/* melStartAxisOperation */
#define	M_OPE_STARTAXOPE_STOP		0x00		/* ����~	*/
#define	M_OPE_STARTAXOPE_PLUS		0x01		/* +�N��	*/
#define	M_OPE_STARTAXOPE_MINUS		0x02		/* -�N��	*/

/* melTransferPLC */
#define	M_OPE_TRANSPLC_ROMWRITE		0x01		/* RAM�ɕۑ�����Ă���PLC��ROM�ɏ�������	 */
#define	M_OPE_TRANSPLC_ROMREAD		0x02		/* ROM�ɏ������܂�Ă���PLC��RAM�֓ǂݏo��	*/

/* melActiveatePLC */										
#define	M_OPE_ACTPLC_TRUE		0x01		/* PLC�N��	  */
#define	M_OPE_ACTPLC_FALSE		0x00		/* PLC��~	  */

/* melSampling */
#define	M_OPE_SAMPLING_START	0x01		/* �T���v�����O�J�n	 */
#define	M_OPE_SAMPLING_STOP		0x00		/* �T���v�����O���~	 */

/* melGetCurrentPrgPointer */

/* melGetCurrentPrgBlock */

/* melGetCurrentAlarmMsg, melGetAlarmMsg */
#define	M_ALM_ALL_ALARM			0x000		/* �A���[����ނ̋�ʂȂ� */

#define	M_ALM_NC_ALARM			0x100		/* NC�A���[��				*/
#define	M_ALM_STOP_CODE			0x200		/* �X�g�b�v�R�[�h			*/
#define	M_ALM_PLC_ALARM			0x300		/* PLC�A���[�����b�Z�[�W	*/
#define	M_ALM_OPE_MSG			0x400		/* �I�y���[�^���b�Z�[�W		*/
#define	M_ALM_ALL_NON_STOPCD	0x1000		/* NC�A���[��/PLC�A���[��/	*//* MA0-A031 */
											/* �I�y���[�^���b�Z�[�W		*//* MA0-A031 */
#define	M_ALM_WARNING			0x80000000	/* ���[�j���O�i�r�b�g�j		*/

#define	M_ALM_NC_SYSTEM			0x101		/*�@�V�X�e���A���[��		*/
#define	M_ALM_NC_SERVO			0x102		/*�@�T�[�{�A���[��			*/
#define	M_ALM_NC_MCP			0x103		/*�@MCP�A���[��				*/
#define	M_ALM_NC_BASICPLC		0x104		/*�@�x�[�V�b�NPLC�A���[��	*/
#define	M_ALM_NC_USERPLC		0x105		/*�@���[�UPLC�A���[��		*/
#define	M_ALM_NC_PROGRAM		0x106		/*�@�v���O�����G���[		*/
#define	M_ALM_NC_SERVO_WARNING		0x107		/*�@�T�[�{���[�j���O	*/
#define	M_ALM_NC_MCP_WARNING		0x108		/*�@MCP���[�j���O		*/
#define	M_ALM_NC_SYSTEM_WARNING		0x109		/*�@�V�X�e�����[�j���O	*/
#define	M_ALM_NC_OPERATION		0x10A		/*�@�I�y���[�V�����G���[	*/
#define	M_ALM_OPE_ALARM			0x10B		/*�@�I�y�R���G���[			*/
#define	M_ALM_NC_AUX			0x10C		/*  �⏕��NC�A���[��		*//* MA0-A045 */

/* melStartOperation */

/* melSelectExecPrg */
#define CHECK_OPTION_PCDIRECT	"CheckOptionPC-Direct"

/* melSelectRestartPrg */
/* �T�[�`�^�C�v lSelectType */
#define M_OPE_RSTRPRG_TYPE_UNMODAL  0x00000000	/*�A�����[�_���T�[�`(�g�b�v�T�[�`)	*/
#define M_OPE_RSTRPRG_TYPE_TYPE1    0x00000001	/*�ĊJ�T�[�` Type 1					*/
#define M_OPE_RSTRPRG_TYPE_TYPE2    0x00000002	/*�ĊJ�T�[�` Type 2					*/
#define M_OPE_RSTRPRG_TYPE_CHECK    0x00000010	/*�`�F�b�N�T�[�`					*/

/* melSendCommand */
#define	M_OPE_RMTLOCMODE_REMOTE		0x001		/*�@�����[�g��Ԃ֐؂�ւ� */
#define	M_OPE_RMTLOCMODE_LOCAL		0x000		/*�@���[�J����Ԃ֐؂�ւ� */

/* -- ���P�[���ݒ� --			*/
/* melSetLocale/melGetLocale */
/*
  �R�[�h�̌n :

    31                              16                               0
    ������������������������������������������������������������������
    ������������������������������������������������������������������
                     �b                        �b
                     �b                        ���������� ���P�[���l
                     ������������������������������������ �@�\
*/

#define	LOCALE_FUNC_MASK		0xffff0000		/* ���P�[���ݒ�@�\�}�X�N	*/	/* MA0-A007 */
#define	LOCALE_LOCALE_MASK		0x0000ffff		/* ���P�[���ݒ�@�\�}�X�N	*/	/* MA0-A007 */
#define	LOCALE_LANG				0x40000000		/* ���P�[���ݒ� ��������	*/	/* MA0-A007 */
#define	LOCALE_TIME				0x20000000		/* ���P�[���ݒ� ����		*/	/* MA0-A007 */
#define	LOCALE_MONETRY			0x10000000		/* ���P�[���ݒ� �ʉ�		*/	/* MA0-A007 */

#define	LANG_JA					0x40000411		/* ���{						*/	/* MA0-A007 */
#define	LANG_EN					0x40000409		/* �A�����J					*/	/* MA0-A007 */
#define	LANG_DE					0x40000407		/* �h�C�c					*/	/* MA0-A007 */
#define	LANG_IT					0x40000410		/* �C�^���A					*/	/* MA0-A007 */
#define	LANG_FR					0x4000040C		/* �t�����X					*/	/* MA0-A007 */
#define	LANG_ES					0x4000040A		/* �X�y�C��					*/	/* MA0-A007 */
#define	LANG_TW					0x40000404		/* ��p						*/	/* MA0-A007 */
#define	LANG_CN					0x40000804		/* ����						*/	/* MA0-A007 */
#define	LANG_KO					0x40000412		/* �؍�						*/	/* MA0-A007 */
#define	LANG_PT					0x40000816		/* �|���g�K��				*/	/* MA0-A007 */
#define	LANG_HU					0x4000040E		/* �n���K���[				*/	/* MA0-A007 */
#define	LANG_NL					0x40000413		/* �I�����_					*/	/* MA0-A007 */
#define	LANG_SV					0x4000041D		/* �X�E�F�[�f��				*/	/* MA0-A007 */
#define	LANG_PL					0x40000415		/* �|�[�����h				*/	/* MA0-A007P */
#define	LANG_TR					0x4000041F		/* �g���R					*/	/* MA0-A007P */
#define	LANG_RU					0x40000419		/* ���V�A					*/	/* MA0-A007P */
#define LANG_CZ					0x40000405		/* �`�F�R					*/	/* MA0-A007Q */


/* melFtpIoctl */
#define	MEL_AF_INET			AF_INET			/* FTP_SOCKET�̃h���C���ݒ�l	*/	/* MA0-A050 */
#define	MEL_SOCK_STREAM		SOCK_STREAM		/* FTP_SOCKET�̃^�C�v���		*/	/* MA0-A050 */
											/* �R�l�N�V�����x�[�X�\�P�b�g	*/	/* MA0-A050 */
/****************************************************************************/
/*	FTP�ʐMsocket�f�[�^�ݒ�p�\����											*/
/****************************************************************************/
#define	FTP_SOCKET	0x01		/* FTP�ʐMsocket						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lDomain;		/* �h���C��								*/	/* P1X-A333M */
	long			lType;			/* �^�C�v								*/	/* P1X-A333M */
	long			lProtocol;		/* �v���g�R��							*/	/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
} MEL_FTP_SOCKET;																/* P1X-A333M */
typedef	MEL_FTP_SOCKET	*LPMEL_FTP_SOCKET;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMbind�f�[�^�ݒ�p�\����											*/
/****************************************************************************/
#define	FTP_BIND		0x02		/* FTP�ʐMbind							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in�\���̃|�C���^			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in�\���̃T�C�Y				*/	/* P1X-A333M */
} MEL_FTP_BIND;																	/* P1X-A333M */
typedef	MEL_FTP_BIND	*LPMEL_FTP_BIND;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMlisten�f�[�^�ݒ�p�\����											*/
/****************************************************************************/
#define	FTP_LISTENT	0x03		/* FTP�ʐMlisten						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
	long			lBacklog;		/* �L���[�ő�ۗ���						*/	/* P1X-A333M */
} MEL_FTP_LISTEN;																/* P1X-A333M */
typedef	MEL_FTP_LISTEN	*LPMEL_FTP_LISTEN;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMaccept�f�[�^�ݒ�p�\����											*/
/****************************************************************************/
#define	FTP_ACCEPT	0x04		/* FTP�ʐMaccept						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in�\���̃|�C���^			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in�\���̃T�C�Y				*/	/* P1X-A333M */
	long			lNewFd;			/* �ڑ��p�t�@�C���f�B�X�N���v�^			*/	/* P1X-A333M */
} MEL_FTP_ACCEPT;																/* P1X-A333M */
typedef	MEL_FTP_ACCEPT	*LPMEL_FTP_ACCEPT;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMclose�f�[�^�ݒ�p�\����											*/
/****************************************************************************/
#define	FTP_CLOSE		0x05		/* FTP�ʐMclose							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
} MEL_FTP_CLOSE;																/* P1X-A333M */
typedef	MEL_FTP_CLOSE	*LPMEL_FTP_CLOSE;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMconnectWithTimeout�f�[�^�ݒ�p�\����								*/
/****************************************************************************/
#define	FTP_CONNECT	0x06		/* FTP�ʐMconnect						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in�\���̃|�C���^			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in�\���̃T�C�Y				*/	/* P1X-A333M */
	struct timeval	*timeVal;		/* �^�C���A�E�g���Ԑݒ�\����			*/	/* P1X-A333M */
} MEL_FTP_CONNECT;																/* P1X-A333M */
typedef	MEL_FTP_CONNECT	*LPMEL_FTP_CONNECT;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMsend�f�[�^�ݒ�p�\����											*/
/****************************************************************************/
#define	FTP_SEND		0x07		/* FTP�ʐMsend							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
	char			*cBuff;			/* ���M�f�[�^�|�C���^					*/	/* P1X-A333M */
	long			*lpBuffLen;		/* ���M�f�[�^�T�C�Y						*/	/* P1X-A333M */
	long			lFlags;			/* �t���O								*/	/* P1X-A333M */
} MEL_FTP_SNED;																	/* P1X-A333M */
typedef	MEL_FTP_SNED	*LPMEL_FTP_SNED;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMrecv�f�[�^�ݒ�p�\����											*/
/****************************************************************************/
#define	FTP_RECV		0x08		/* FTP�ʐMrecv							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
	char			*cBuff;			/* ��M�f�[�^�|�C���^					*/	/* P1X-A333M */
	long			*lpBuffLen;		/* �o�b�t�@�T�C�Y						*/	/* P1X-A333M */
	long			lFlags;			/* �t���O								*/	/* P1X-A333M */
} MEL_FTP_RECV;																	/* P1X-A333M */
typedef	MEL_FTP_RECV	*LPMEL_FTP_RECV;										/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMgetsockname�f�[�^�ݒ�p�\����									*/
/****************************************************************************/
#define	FTP_GETSNAME	0x09		/* FTP�ʐMgetsockname					*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* �t�@�C���f�B�X�N���v�^				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in�\���̃|�C���^			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in�\���̃T�C�Y				*/	/* P1X-A333M */
} MEL_FTP_GETSNAME;																/* P1X-A333M */
typedef	MEL_FTP_GETSNAME	*LPMEL_FTP_GETSNAME;								/* P1X-A333M */

/****************************************************************************/
/*	FTP�ʐMhostGetByName�f�[�^�ݒ�p�\����									*/
/****************************************************************************/
#define	FTP_HOSTNAME	0x0a		/* FTP�ʐMhostGetByName					*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	char			*cName;			/* ���M�f�[�^�|�C���^					*/	/* P1X-A333M */
	long			lInetAddr;		/* �C���^�[�l�b�g�A�h���X				*/	/* P1X-A333M */
} MEL_FTP_HOSTNAME;																/* P1X-A333M */
typedef	MEL_FTP_HOSTNAME	*LPMEL_FTP_HOSTNAME;								/* P1X-A333M */

#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/*INCmelncapih*/
