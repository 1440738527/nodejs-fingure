/**************************************************************************************** MELCO *****/
/*																						  (Nx)		*/
/*	<�t�@�C����>		melsect.h																	*/
/*	<�@�\>				��敪define��`															*/
/*	<�v���O������>																					*/
/*																									*/
/*	COPYRIGHT (C) 2000 MITSUBISHI ELECTRIC CORPORATION												*/
/*	ALL RIGHTS RESERVED																				*/
/****************************************************************************************************/
#ifndef INCmelsecth
#define INCmelsecth

/* �V�X�e��	*/
#define	M_SEC_SYSINF_SYS	1	/* �V�X�e�����(�n����)	*/
#define	M_SEC_SYSINF_COM	2	/* �V�X�e�����(�n������)	*/
#define	M_SEC_FSYSINF	3	/* �t�@�C���V�X�e�����	*/

/* �ϐ�	*/
#define	M_SEC_CMNVAR_SYS	4	/* �R�����ϐ�(�n���� #100�`)	*/
#define	M_SEC_CMNVAR_COM	5	/* �R�����ϐ�(�n������ #500�`)	*/
#define	M_SEC_LOCVAR	6	/* ���[�J���ϐ�	*/
#define	M_SEC_MACVAR	7	/* �}�N���ϐ�	*//* P1X-A387 */

/* ���W�n	*/
#define	M_SEC_WRKOFS	8	/* ���W�n�I�t�Z�b�g(���[�N���W)	*/
#define	M_SEC_WRKOFS_EX	9	/* ���W�n�I�t�Z�b�g(�g�����[�N���W)	*/
#define	M_SEC_LOCAL_OFS	10	/* ���W�n�I�t�Z�b�g(���[�J�����W)	*/
#define	M_SEC_OTHER_OFS	11	/* ���W�n�I�t�Z�b�g(���̑����W�n)	*/

/* �H��	*/
#define	M_SEC_TOLOFS1_SYS	12	/* �n���ʍH��I�t�Z�b�g(�^�C�v1)	*/
#define	M_SEC_TOLOFS2_SYS	13	/* �n���ʍH��I�t�Z�b�g(�^�C�v2)	*/
#define	M_SEC_TOLOFS3_SYS	14	/* �n���ʍH��I�t�Z�b�g(�^�C�v3)	*/
#define	M_SEC_TLIFE_DAT	18	/* �����Ǘ��f�[�^	*/
#define	M_SEC_TLIFE_INF	19	/* �����Ǘ����	*/
#define	M_SEC_TOL_REG	20	/* �H��o�^	*/
#define	M_SEC_SP_WAIT	21	/* �厲�E�ҋ@	*/
#define	M_SEC_TOL_MEAS	22	/* �H��v��	*/

/* �v���O����	*/
#define	M_SEC_BUF_EDT	23	/* �o�b�t�@�C��	*/
#define	M_SEC_PRG_CHKIF	24	/* �o�b�N�O�����h�`�F�b�N	*/
#define	M_SEC_FILE_INF	25	/* �t�@�C�����	*/

/* �^�]	*/
#define	M_SEC_SPEED_INF	33	/* ���x���	*/
#define	M_SEC_SP_INF	34	/* �厲���	*/
#define	M_SEC_EXEC_STS	35	/* �^�]���	*/
#define	M_SEC_AXIS_STS	36	/* ���X�e�[�^�X	*/
#define	M_SEC_COUNTER	37	/* �J�E���^	*/
#define	M_SEC_MSTB_EXEC_STS	38	/* MSTB���s���	*/
#define	M_SEC_RUNTIME	40	/* �ώZ����	*/
#define	M_SEC_G_MODAL	41	/* G���[�_��	*/
#define	M_SEC_F_MODAL	42	/* F���[�_��	*/
#define	M_SEC_MSTB_MODAL	43	/* MSTB���[�_��	*/
#define	M_SEC_PRG_EXEC_STAT	45	/* �v���O�������s���	*/
#define	M_SEC_PRG_TREE	46	/* �v���O�����c���[	*/
#define	M_SEC_PRG_TREE_GC	47	/* �O���t�B�b�N�`�F�b�N�p�v���O�����c���[	*/

/* �f�f	*/
#define	M_SEC_PLC_DEV_BIT	53	/* PLC�f�o�C�X(bit)	*/
#define	M_SEC_PLC_DEV_CHAR	54	/* PLC�f�o�C�X(char)	*/
#define	M_SEC_PLC_DEV_WORD	55	/* PLC�f�o�C�X(word)	*/
#define	M_SEC_PLC_DEV_LONG	56	/* PLC�f�o�C�X(long)	*/
#define	M_SEC_PLC_FORCE_OUT	58	/* PLC�����o��	*/
#define	M_SEC_MON_SV	59	/* �T�[�{���j�^	*/
#define	M_SEC_MON_SV_PLC	60	/* �T�[�{���j�^(PLC��)	*//* P0Y-A013E */
#define	M_SEC_MON_SYNCERR	62	/* �����덷���j�^	*/
#define	M_SEC_MON_SP	63	/* �厲���j�^	*/
#define	M_SEC_MON_PW_SPLY	64	/* �p���[�T�v���C���j�^	*/
#define	M_SEC_MON_AUX	65	/* �⏕���A���v���j�^	*/
#define	M_SEC_HW_CFG	66	/* H/W�\��	*/
#define	M_SEC_SW_CFG	67	/* S/W�\��	*/
#define	M_SEC_ANET_IF	69	/* ���S�l�b�gI/F	*//* P1X-A121 */

/* �ێ�	*/
#define	M_SEC_ABS_DETECT	70	/* ��Έʒu���o�f�[�^	*/
#define	M_SEC_ABS_DETECT_PLC	71	/* ��Έʒu���o�f�[�^(PLC)	*//* P0Y-A013E */
#define	M_SEC_AUX_AXIS_CTL	72	/* �⏕������	*/
#define	M_SEC_SMP_PRM	74	/* �T���v�����O�p�����[�^	*/
#define	M_SEC_KEY_HIST	79	/* �L�[����	*/
#define	M_SEC_SANALOG	82	/* �厲�A�i���O����	*//* P1X-A033 */

/* �@�B�p�����[�^	*/
#define	M_SEC_MPRM_REF_RTN	95	/* ���_���A�p�����[�^	*/
#define	M_SEC_MPRM_SV	96	/* �T�[�{�p�����[�^	*/
#define	M_SEC_MPRM_SP_SPC	97	/* �厲�d�l�p�����[�^	*/
#define	M_SEC_MPRM_SP	98	/* �厲�p�����[�^	*/
#define	M_SEC_MPRM_AUX	100	/* �⏕���E���p�����[�^	*/
#define	M_SEC_MPRM_ABS_POS	101	/* ��Έʒu�p�����[�^	*/
#define	M_SEC_MPRM_MC_ERR	102	/* �@�B�덷�␳�p�����[�^	*/
#define	M_SEC_MPRM_POS_SW	104	/* �|�W�V�����X�C�b�`	*/
#define	M_SEC_MPRM_MACRO	106	/* �}�N���ꗗ	*/
#define	M_SEC_MPRM_PLC_CONST	107	/* PLC�萔	*/
#define	M_SEC_MPRM_PLC_TIMER	108	/* PLC�^�C�}	*//* P1X-A006p */
#define	M_SEC_MPRM_PLC_COUNT	109	/* PLC�J�E���^	*//* P1X-A006p */
#define	M_SEC_MPRM_SELECT_BIT	110	/* �r�b�g�I��	*/
#define	M_SEC_MPRM_OPEN_1	111	/* �J���p�����[�^1(long)	*/
#define	M_SEC_MPRM_OPEN_2	112	/* �J���p�����[�^2(double)	*/
#define	M_SEC_MPRM_ANET1	118	/* ���S�l�b�g1	*//* P0Y-A013c */
#define	M_SEC_MPRM_ANET2	119	/* ���S�l�b�g2	*//* P0Y-A013c */

/* ���[�U�p�����[�^	*/
#define	M_SEC_UPRM_PLC_SWH	120	/* PLC�X�C�b�`	*/
#define	M_SEC_UPRM_OPE	121	/* ����p�����[�^	*/
#define	M_SEC_UPRM_IO	122	/* ���o�̓p�����[�^	*/
#define	M_SEC_UPRM_HOST_LINK	123	/* �R���s���[�^�����N�p�����[�^	*/
#define	M_SEC_UPRM_ETHER	124	/* �C�[�T�l�b�g�p�����[�^	*/
#define	M_SEC_UPRM_BARI	125	/* �o���A	*/

/* ��{�p�����[�^	*/
#define	M_SEC_BASEPRM	126	/* ��{�p�����[�^	*/

/* ���p�����[�^	*/
#define	M_SEC_AXISPRM	127	/* ���p�����[�^	*/

/* ��]���\���p�����[�^	*/
#define	M_SEC_MPRM_ROT_AXIS	128	/* ��]���\���p�����[�^	*//* P1X-A062 */

/* PLC�����o���p�����[�^	*/
#define	M_SEC_MPRM_PLCINDEX	129	/* PLC�����o���p�����[�^	*//* P1X-A299 */

/* PLC���p�����[�^	*/
#define	M_SEC_AXISPRM_PLC	130	/* PLC���p�����[�^	*//* P0Y-A013E */
#define	M_SEC_MPRM_REF_RTN_PLC	131	/* PLC�����_���A�p�����[�^	*//* P0Y-A013E */
#define	M_SEC_MPRM_SV_PLC	132	/* PLC���T�[�{�p�����[�^	*//* P0Y-A013E */
#define	M_SEC_MPRM_ABS_POS_PLC	133	/* PLC����Έʒu�p�����[�^	*//* P0Y-A013E */
#define	M_SEC_MPRM_PLCINDEX_PLC	134	/* PLC��PLC�����o���p�����[�^	*//* P1X-A299 */

/* ���H�����I���p�����[�^	*/
#define	M_SEC_CNDSLC_PRM	137	/* ���H�����I���p�����[�^	*//* P1X-A517 */

/* CC-Link	*/
#define	M_SEC_MPRM_CCLK_BASE	138	/* CC-Link�p�����[�^��{  (�n������)	*//* P1X-A247 */
#define	M_SEC_MPRM_CCLK_BRAU	139	/* CC-Link�p�����[�^�Ǐ��(�n������)	*//* P1X-A247 */

/* ���_�[	*/
#define	M_SEC_LADIF_COM	140	/* ���_�[I/F(����)	*//* P0Y-A013E */

/* ���[�U�J��I/F	*/
#define	M_SEC_UOPEN_PARA	150	/* ���[�U�J��I/F�p�����[�^	*//* P1X-A412 */
#define	M_SEC_UOPEN_DATA	151	/* ���[�U�J��I/F�f�[�^		*//* P1X-A412 */

/* �i��	*/
#define	M_SEC_RNAVIGATER	301	/* �炭�炭5��I/F	*//* P1X-A451 */

#endif
