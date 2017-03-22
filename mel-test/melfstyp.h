/**************************************************************************************** MELCO *****/
/*																						  (Nx)		*/
/*	<�t�@�C����>		melfstyp.h																	*/
/*	<�@�\>				melFs�֘A�̒�`(�J�X�^��API���C�u�����@�f�[�^�^�C�v��`)					*/
/*	<�v���O������>																					*/
/*																									*/
/*	COPYRIGHT (C) 1999,2000-2008 MITSUBISHI ELECTRIC CORPORATION									*/
/*	ALL RIGHTS RESERVED																				*/
/****************************************************************************************************/

#ifndef	INCmelfstyph
#define	INCmelfstyph

#ifdef	_WIN32																	/* MA0-A007 */
#include	<windows.h>															/* MA0-A007 */
#else																			/* MA0-A007 */
#include	<winhead.h>															/* MA0-A007 */
#endif																			/* MA0-A007 */

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

/* ----- �m�b�t�@�C���V�X�e���A�N�Z�X�^�f�[�^�^�C�v��`	----- */
/* �t�@�C����� */
typedef struct {
	long	lMode;				/* �t�@�C���̑����ist_mode:MM_S_IFDIR:�f�B���N�g���j	*/
	long	lFileSize;			/* �t�@�C���T�C�Y			*/
	short	nYear;				/* �t�@�C���X�V���i�N�j		*/
	short	nMonth;				/* �t�@�C���X�V���i���j		*/
	short	nDay;				/* �t�@�C���X�V���i���j		*/
	short	nHour;				/* �t�@�C���X�V���i���j		*/
	short	nMinute;			/* �t�@�C���X�V���i���j		*/
	short	nSecond;			/* �t�@�C���X�V���i�b�j		*/
} FS_STAT;

/* File mode (st_mode) bit masks */
#define MM_S_IFMT   0xf000      /* file type field */
#define MM_S_IFIFO  0x1000      /*  fifo */
#define MM_S_IFCHR  0x2000      /*  character special */
#define MM_S_IFDIR  0x4000      /*  directory */
#define MM_S_IFBLK  0x6000      /*  block special */
#define MM_S_IFREG  0x8000      /*  regular */
#define MM_S_IFLNK  0xa000      /*  symbolic link */
#define MM_S_IFSOCK 0xc000      /*  socket */

#define MM_S_ISUID  0x0800      /* set user id on execution */
#define MM_S_ISGID  0x0400      /* set group id on execution */
#define MM_S_IRUSR  0x0100      /* read permission, owner */
#define MM_S_IWUSR  0x0080      /* write permission, owner */
#define MM_S_IXUSR  0x0040      /* execute/search permission, owner */
#define MM_S_IRWXU  0x01c0      /* read/write/execute permission, owner */

#define MM_S_IRGRP  0x0020      /* read permission, group */
#define MM_S_IWGRP  0x0010      /* write permission, group */
#define MM_S_IXGRP  0x0008      /* execute/search permission, group */
#define MM_S_IRWXG  0x0038      /* read/write/execute permission, group */

#define MM_S_IROTH  0x0004      /* read permission, other */
#define MM_S_IWOTH  0x0002      /* write permission, other */
#define MM_S_IXOTH  0x0001      /* execute/search permission, other */
#define MM_S_IRWXO  0x0007      /* read/write/execute permission, other */


/* ----- NC�������t�@�C���V�X�e���A�N�Z�X�R�}���h��` ----- */
/* melFSCreateFile/melFSOpenFile */
#define	M_FSOPEN_RDONLY			0x0000		/* �ǂݎ���p�ɃI�[�v������			*/
#define	M_FSOPEN_WRONLY			0x0001		/* �������ݐ�p�ɃI�[�v������			*/
#define	M_FSOPEN_RDWR			0x0002		/* �ǂݎ��^�������ݗp�ɃI�[�v������	*/
#define	M_FSOPEN_IRWXO 			0x0007		/* read/write/execute permission, other	*//* MA0-B026 */
#define	M_FSOPEN_CREAT 			0x0200		/* open with file create				*//* MA0-B026 */
#define	M_FSOPEN_TRUNC 			0x0400		/* open with truncation					*//* MA0-B026 */

/* melFSIoctlFile */
#define	M_FSIOCTL_FREECHAR		0x0000		/* �t�@�C���V�X�e���̎c�������̎擾			*/
#define	M_FSIOCTL_ENTRYCHAR		0x0001		/* �t�@�C���V�X�e���̓o�^�������̎擾		*/
#define	M_FSIOCTL_FREEFILE		0x0002		/* �t�@�C���V�X�e���̃t�@�C���c�{���̎擾	*/
#define	M_FSIOCTL_ENTRYFILE		0x0003		/* �t�@�C���V�X�e���̃t�@�C���o�^�{���̎擾	*/
#define	M_FSIOCTL_MDISETFIN		0x0004		/* �l�c�h�v���O�����̐ݒ芮��				*/
#define M_FSIOCTL_RDFILECOM		0x0005		/* �t�@�C���R�����g�̓ǂݏo��	<M6L#02>	*/
#define M_FSIOCTL_WTFILECOM		0x0006		/* �t�@�C���R�����g�̏�������	<M6L#02>	*/
#define M_FSIOCTL_DISKFORMAT	0x0007		/* NC�������̃t�H�[�}�b�g					*//* P1X-A006E */
#define	M_FSIOCTL_NOBOFOUT		0x0008		/* �o�͎���BOF("%")���o�͂��Ȃ�				*//* P1X-A047 */
#define M_FSIOCTL_SIOINIT		0x0009		/* NC�V���A���̏����ݒ�						*//* MA0-A041 */
#define M_FSIOCTL_SIOGETERR		0x000A		/* NC�V���A���̃G���[�擾					*//* MA0-A041 */
#define M_FSIOCTL_SIOSTOP		0x000B		/* NC�V���A���̋�����~						*//* MA0-A041 */
#define	M_FSIOCTL_READDIRSYS	0x000C		/* melFSReadDirectory()�Ŏ擾����n���w��	*//* MA0-A048 */

/* melFSLseekFile */
#define	M_FSLSEEK_TOP			0x0000		/* �t�@�C���̐擪����V�[�N		*/
#define	M_FSLSEEK_CURRENT		0x0001		/* �t�@�C���̌��݈ʒu����V�[�N	*/
#define	M_FSLSEEK_END			0x0002		/* �t�@�C���̍Ōォ��V�[�N		*/

#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/* INCmelfstyph */
