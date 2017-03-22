/**************************************************************************************** MELCO *****/
/*																						  (Nx)		*/
/*	<�t�@�C����>		melssect.h																	*/
/*	<�@�\>				���敪define��`															*/
/*	<�v���O������>																					*/
/*																									*/
/*	COPYRIGHT (C) 2000 MITSUBISHI ELECTRIC CORPORATION												*/
/*	ALL RIGHTS RESERVED																				*/
/****************************************************************************************************/
#ifndef INCmelssecth
#define INCmelssecth

/* �V�X�e�����i�n���ʁj	*/
#define	M_SSEC_SINFSS_AXIS_NUM	1	/* �n��������(�N���X�\��)	*/
#define	M_SSEC_SINFSS_AXIS_NUM_BASE	2	/* �n��������(��{�\��)	*/
#define	M_SSEC_SINFSS_CMVRS_NOS	100	/* �R�����ϐ�(#100�`)�g��	*/

/* �V�X�e�����i�n�����ʁj	*/
#define	M_SSEC_SINFC_SYSTEM_NUM	1	/* �n����	*/
#define	M_SSEC_SINFC_NC_AXIS	2	/* �SNC����(NC)	*/
#define	M_SSEC_SINFC_ALL_AXIS	3	/* �S���䎲��(NC+PLC+SP)	*/
#define	M_SSEC_SINFC_SP_AXIS	4	/* �厲����	*/
#define	M_SSEC_SINFC_PLC_AXIS	5	/* PLC����	*/
#define	M_SSEC_SINFC_AUX_AXIS	6	/* �⏕������	*/
#define	M_SSEC_SINFC_FSYS_FORM	7	/* �t�@�C���V�X�e���`��	*/
#define	M_SSEC_SINFC_CMVRC_NOS	8	/* �R�����ϐ�(#500�`)�g��	*/
#define	M_SSEC_SINFC_PRSIZE	9	/* ���H�v���O�����o�^�ő�{�����	*//* P0Y-A013B */
#define	M_SSEC_SINFC_PWSPLY_AXIS	10	/* �p���[�T�v���C�����iSV+SP)	*//* P0Y-A013E */
#define	M_SSEC_SINFC_PLCIDX_AXIS	11	/* PLC����o������	*//* P1X-A299J */
#define	M_SSEC_SINFC_NCTYPE	100	/* NC�̃^�C�v	*//* P1X-A006 */
#define	M_SSEC_SINFC_PLCIF_TYPE	101	/* PLC�f�o�C�X�̊��t���^�C�v�iM6/M7)	*//* P1X-A030 */
#define	M_SSEC_SINFC_4PALLET_ON	102	/* 4�ʃp���b�g�o�^�L��	*//* P1X-A166 */
#define	M_SSEC_SINFC_CMVRC_N400_ON	103	/* �R�����ϐ�#400�ԑ�L��	*//* P1X-A099AJ */
#define	M_SSEC_SINFC_CROSSCOM_ON	104	/* �n���ԃR�����ϐ�#100100�ԑ�L��	*//* P1X-A295 */
#define	M_SSEC_SINFC_MCP_CYCLE	105	/* �������				*//* P1X-A145M */
#define	M_SSEC_SINFC_CMVRC_N900000_ON 	106	/* �R�����ϐ�#900000�ԑ�L��	*//* P1X-A489 */
#define	M_SSEC_SINFC_SERIAL_NO	201	/* NC�����ԍ�	*//* P1X-A904 */

/* �t�@�C���V�X�e�����	*/
#define	M_SSEC_FINF_TOFS_TYP	1	/* �H��I�t�Z�b�g�^�C�v	*/
#define	M_SSEC_FINF_TOFS_NOS	2	/* �H��I�t�Z�b�g�g��	*/
#define	M_SSEC_FINF_WOFS_NOS	3	/* ���[�N�I�t�Z�b�g�g��	*/
#define	M_SSEC_FINF_EDTFILE_REGIST	100	/* �ҏW/���̓t�@�C���̓o�^	*//* P1X-A471 */
#define	M_SSEC_FINF_EDTFILE_RELEASE	101	/* �ҏW/���̓t�@�C���̉���	*//* P1X-A471 */
#define	M_SSEC_FINF_EDTFILE_CHK	102	/* �ҏW/���̓t�@�C���̃`�F�b�N	*//* P1X-A471 */

/* �R�����ϐ�(�n���� #100�`)	*/
#define	M_SSEC_CMVRS_DAT(x)	(700 + (x))	/* 100�`199 (x=100�`199)	*/

/* �R�����ϐ�(�n������ #500�`)	*/
#define	M_SSEC_CMVRC_DAT(x)	(900 + (x))	/* �R�����ϐ� �ϐ�(�n������ #400�`#999) (x=400�`999)	*/
#define	M_SSEC_CMVRC_CMT(x)	(2000 + (x))	/* �R�����ϐ��R�����g(�n������ #500�`#519) (x=500�`519)	*/
#define	M_SSEC_CMVRC_S1_DAT(x)	(10000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #100100�`#100199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S2_DAT(x)	(11000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #200100�`#200199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S3_DAT(x)	(12000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #300100�`#300199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S4_DAT(x)	(13000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #400100�`#400199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S5_DAT(x)	(14000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #500100�`#500199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S6_DAT(x)	(15000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #600100�`#600199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S7_DAT(x)	(16000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #700100�`#700199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S8_DAT(x)	(17000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #800100�`#800199) (x=100�`199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_DAT2(x)	(20000 + (x))	/* �R�����ϐ� �ϐ�(�n������ #900000�`#907399) (x=0�`7399)	*//* P1X-A489 */
#define	M_SSEC_CMVRC_CMVRS_CLR	100000	/* �R�����ϐ��͈͎w��N���A	*//* P1X-A489 */

/* ���[�J���ϐ�	*/
#define	M_SSEC_LOCVR_LV0_DAT(x)	(1000 + (x))	/* ���[�J���ϐ�(���x��0)(x=1�`33)	*/
#define	M_SSEC_LOCVR_LV1_DAT(x)	(1100 + (x))	/* ���[�J���ϐ�(���x��1)(x=1�`33)	*/
#define	M_SSEC_LOCVR_LV2_DAT(x)	(1200 + (x))	/* ���[�J���ϐ�(���x��2)(x=1�`33)	*/
#define	M_SSEC_LOCVR_LV3_DAT(x)	(1300 + (x))	/* ���[�J���ϐ�(���x��3)(x=1�`33)	*/
#define	M_SSEC_LOCVR_LV4_DAT(x)	(1400 + (x))	/* ���[�J���ϐ�(���x��4)(x=1�`33)	*/
#define	M_SSEC_LOCVR_EMPTY_VAL	2000	/* ���[�J���ϐ��@��ϐ�	*//* P0Y-A013B */

/* �}�N���ϐ�	*/
#define	M_SSEC_MACVR_DAT(x)	(x)	/* �@�B���[�J�}�N���ϐ�(x=450�`499,80000�`80049,80500�`80649)	*//* P1X-A387 */

/* ���W�n�I�t�Z�b�g�i���[�N���W�j	*/
#define	M_SSEC_WOFS_G54	54	/* G54���[�N���W�n�I�t�Z�b�g	*/
#define	M_SSEC_WOFS_G55	55	/* G55���[�N���W�n�I�t�Z�b�g	*/
#define	M_SSEC_WOFS_G56	56	/* G56���[�N���W�n�I�t�Z�b�g	*/
#define	M_SSEC_WOFS_G57	57	/* G57���[�N���W�n�I�t�Z�b�g	*/
#define	M_SSEC_WOFS_G58	58	/* G58���[�N���W�n�I�t�Z�b�g	*/
#define	M_SSEC_WOFS_G59	59	/* G59���[�N���W�n�I�t�Z�b�g	*/

/* ���W�n�I�t�Z�b�g�i�g�����[�N���W�j	*/
#define	M_SSEC_AWOFS_G54_1P1	1	/* G54.1P1	*/
#define	M_SSEC_AWOFS_G54_1P2	2	/* G54.1P2	*/
#define	M_SSEC_AWOFS_G54_1P3	3	/* G54.1P3	*/
#define	M_SSEC_AWOFS_G54_1P4	4	/* G54.1P4	*/
#define	M_SSEC_AWOFS_G54_1P5	5	/* G54.1P5	*/
#define	M_SSEC_AWOFS_G54_1P6	6	/* G54.1P6	*/
#define	M_SSEC_AWOFS_G54_1P7	7	/* G54.1P7	*/
#define	M_SSEC_AWOFS_G54_1P8	8	/* G54.1P8	*/
#define	M_SSEC_AWOFS_G54_1P9	9	/* G54.1P9	*/
#define	M_SSEC_AWOFS_G54_1P10	10	/* G54.1P10	*/
#define	M_SSEC_AWOFS_G54_1P11	11	/* G54.1P11	*/
#define	M_SSEC_AWOFS_G54_1P12	12	/* G54.1P12	*/
#define	M_SSEC_AWOFS_G54_1P13	13	/* G54.1P13	*/
#define	M_SSEC_AWOFS_G54_1P14	14	/* G54.1P14	*/
#define	M_SSEC_AWOFS_G54_1P15	15	/* G54.1P15	*/
#define	M_SSEC_AWOFS_G54_1P16	16	/* G54.1P16	*/
#define	M_SSEC_AWOFS_G54_1P17	17	/* G54.1P17	*/
#define	M_SSEC_AWOFS_G54_1P18	18	/* G54.1P18	*/
#define	M_SSEC_AWOFS_G54_1P19	19	/* G54.1P19	*/
#define	M_SSEC_AWOFS_G54_1P20	20	/* G54.1P20	*/
#define	M_SSEC_AWOFS_G54_1P21	21	/* G54.1P21	*/
#define	M_SSEC_AWOFS_G54_1P22	22	/* G54.1P22	*/
#define	M_SSEC_AWOFS_G54_1P23	23	/* G54.1P23	*/
#define	M_SSEC_AWOFS_G54_1P24	24	/* G54.1P24	*/
#define	M_SSEC_AWOFS_G54_1P25	25	/* G54.1P25	*/
#define	M_SSEC_AWOFS_G54_1P26	26	/* G54.1P26	*/
#define	M_SSEC_AWOFS_G54_1P27	27	/* G54.1P27	*/
#define	M_SSEC_AWOFS_G54_1P28	28	/* G54.1P28	*/
#define	M_SSEC_AWOFS_G54_1P29	29	/* G54.1P29	*/
#define	M_SSEC_AWOFS_G54_1P30	30	/* G54.1P30	*/
#define	M_SSEC_AWOFS_G54_1P31	31	/* G54.1P31	*/
#define	M_SSEC_AWOFS_G54_1P32	32	/* G54.1P32	*/
#define	M_SSEC_AWOFS_G54_1P33	33	/* G54.1P33	*/
#define	M_SSEC_AWOFS_G54_1P34	34	/* G54.1P34	*/
#define	M_SSEC_AWOFS_G54_1P35	35	/* G54.1P35	*/
#define	M_SSEC_AWOFS_G54_1P36	36	/* G54.1P36	*/
#define	M_SSEC_AWOFS_G54_1P37	37	/* G54.1P37	*/
#define	M_SSEC_AWOFS_G54_1P38	38	/* G54.1P38	*/
#define	M_SSEC_AWOFS_G54_1P39	39	/* G54.1P39	*/
#define	M_SSEC_AWOFS_G54_1P40	40	/* G54.1P40	*/
#define	M_SSEC_AWOFS_G54_1P41	41	/* G54.1P41	*/
#define	M_SSEC_AWOFS_G54_1P42	42	/* G54.1P42	*/
#define	M_SSEC_AWOFS_G54_1P43	43	/* G54.1P43	*/
#define	M_SSEC_AWOFS_G54_1P44	44	/* G54.1P44	*/
#define	M_SSEC_AWOFS_G54_1P45	45	/* G54.1P45	*/
#define	M_SSEC_AWOFS_G54_1P46	46	/* G54.1P46	*/
#define	M_SSEC_AWOFS_G54_1P47	47	/* G54.1P47	*/
#define	M_SSEC_AWOFS_G54_1P48	48	/* G54.1P48	*/
#define	M_SSEC_AWOFS_G54_1P49	49	/* G54.1P49	*/
#define	M_SSEC_AWOFS_G54_1P50	50	/* G54.1P50	*/
#define	M_SSEC_AWOFS_G54_1P51	51	/* G54.1P51	*/
#define	M_SSEC_AWOFS_G54_1P52	52	/* G54.1P52	*/
#define	M_SSEC_AWOFS_G54_1P53	53	/* G54.1P53	*/
#define	M_SSEC_AWOFS_G54_1P54	54	/* G54.1P54	*/
#define	M_SSEC_AWOFS_G54_1P55	55	/* G54.1P55	*/
#define	M_SSEC_AWOFS_G54_1P56	56	/* G54.1P56	*/
#define	M_SSEC_AWOFS_G54_1P57	57	/* G54.1P57	*/
#define	M_SSEC_AWOFS_G54_1P58	58	/* G54.1P58	*/
#define	M_SSEC_AWOFS_G54_1P59	59	/* G54.1P59	*/
#define	M_SSEC_AWOFS_G54_1P60	60	/* G54.1P60	*/
#define	M_SSEC_AWOFS_G54_1P61	61	/* G54.1P61	*/
#define	M_SSEC_AWOFS_G54_1P62	62	/* G54.1P62	*/
#define	M_SSEC_AWOFS_G54_1P63	63	/* G54.1P63	*/
#define	M_SSEC_AWOFS_G54_1P64	64	/* G54.1P64	*/
#define	M_SSEC_AWOFS_G54_1P65	65	/* G54.1P65	*/
#define	M_SSEC_AWOFS_G54_1P66	66	/* G54.1P66	*/
#define	M_SSEC_AWOFS_G54_1P67	67	/* G54.1P67	*/
#define	M_SSEC_AWOFS_G54_1P68	68	/* G54.1P68	*/
#define	M_SSEC_AWOFS_G54_1P69	69	/* G54.1P69	*/
#define	M_SSEC_AWOFS_G54_1P70	70	/* G54.1P70	*/
#define	M_SSEC_AWOFS_G54_1P71	71	/* G54.1P71	*/
#define	M_SSEC_AWOFS_G54_1P72	72	/* G54.1P72	*/
#define	M_SSEC_AWOFS_G54_1P73	73	/* G54.1P73	*/
#define	M_SSEC_AWOFS_G54_1P74	74	/* G54.1P74	*/
#define	M_SSEC_AWOFS_G54_1P75	75	/* G54.1P75	*/
#define	M_SSEC_AWOFS_G54_1P76	76	/* G54.1P76	*/
#define	M_SSEC_AWOFS_G54_1P77	77	/* G54.1P77	*/
#define	M_SSEC_AWOFS_G54_1P78	78	/* G54.1P78	*/
#define	M_SSEC_AWOFS_G54_1P79	79	/* G54.1P79	*/
#define	M_SSEC_AWOFS_G54_1P80	80	/* G54.1P80	*/
#define	M_SSEC_AWOFS_G54_1P81	81	/* G54.1P81	*/
#define	M_SSEC_AWOFS_G54_1P82	82	/* G54.1P82	*/
#define	M_SSEC_AWOFS_G54_1P83	83	/* G54.1P83	*/
#define	M_SSEC_AWOFS_G54_1P84	84	/* G54.1P84	*/
#define	M_SSEC_AWOFS_G54_1P85	85	/* G54.1P85	*/
#define	M_SSEC_AWOFS_G54_1P86	86	/* G54.1P86	*/
#define	M_SSEC_AWOFS_G54_1P87	87	/* G54.1P87	*/
#define	M_SSEC_AWOFS_G54_1P88	88	/* G54.1P88	*/
#define	M_SSEC_AWOFS_G54_1P89	89	/* G54.1P89	*/
#define	M_SSEC_AWOFS_G54_1P90	90	/* G54.1P90	*/
#define	M_SSEC_AWOFS_G54_1P91	91	/* G54.1P91	*/
#define	M_SSEC_AWOFS_G54_1P92	92	/* G54.1P92	*/
#define	M_SSEC_AWOFS_G54_1P93	93	/* G54.1P93	*/
#define	M_SSEC_AWOFS_G54_1P94	94	/* G54.1P94	*/
#define	M_SSEC_AWOFS_G54_1P95	95	/* G54.1P95	*/
#define	M_SSEC_AWOFS_G54_1P96	96	/* G54.1P96	*/

/* ���W�n�I�t�Z�b�g(���[�J�����W)	*/
#define	M_SSEC_LOCALOFS_G54	1	/* ���[�J�����W�n�I�t�Z�b�g�iG54�j	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G55	2	/* ���[�J�����W�n�I�t�Z�b�g�iG55�j	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G56	3	/* ���[�J�����W�n�I�t�Z�b�g�iG56�j	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G57	4	/* ���[�J�����W�n�I�t�Z�b�g�iG57�j	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G58	5	/* ���[�J�����W�n�I�t�Z�b�g�iG58�j	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G59	6	/* ���[�J�����W�n�I�t�Z�b�g�iG59�j	*//* P1X-A020M */

/* ���W�n�I�t�Z�b�g(���̑����W�n)	*/
#define	M_SSEC_OTHOFS_EXT	1	/* �O�����[�N�I�t�Z�b�g(EXT)	*/
#define	M_SSEC_OTHOFS_G92OFS	2	/* G92���W�n�I�t�Z�b�g	*//* P1X-A020M */
#define	M_SSEC_OTHOFS_ROT_TYPE	1000	/* 5�����H�@�B�\��	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_COM	1100	/* ���[�N�ݒu�덷�␳�f�[�^�i���ʁj	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P1	1101	/* ���[�N�ݒu�덷�␳�f�[�^�iG54.4P1)	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P2	1102	/* ���[�N�ݒu�덷�␳�f�[�^�iG54.4P2�j	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P3	1103	/* ���[�N�ݒu�덷�␳�f�[�^�iG54.4P3�j	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P4	1104	/* ���[�N�ݒu�덷�␳�f�[�^�iG54.4P4�j	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P5	1105	/* ���[�N�ݒu�덷�␳�f�[�^�iG54.4P5�j	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P6	1106	/* ���[�N�ݒu�덷�␳�f�[�^�iG54.4P6�j	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P7	1107	/* ���[�N�ݒu�덷�␳�f�[�^�iG54.4P7�j	*//* P1X-A426 */

/* �n���ʍH��I�t�Z�b�g�i�^�C�v1�j	*/
#define	M_SSEC_TOFS1S_MC_DAT(x)	(x)	/* �␳�f�[�^ (x=1�`999)	*/

/* �n���ʍH��I�t�Z�b�g�i�^�C�v2�j	*/
#define	M_SSEC_TOFS2S_LENG(x)	(x)	/* �����@ (x=1�`999)	*/
#define	M_SSEC_TOFS2S_RADIUS(x)	(1000 + (x))	/* �a���@ (x=1�`999)	*/
#define	M_SSEC_TOFS2S_WEAR_L(x)	(2000 + (x))	/* ������ (x=1�`999)	*/
#define	M_SSEC_TOFS2S_WEAR_R(x)	(3000 + (x))	/* �a���� (x=1�`999)	*/

/* �n���ʍH��I�t�Z�b�g�i�^�C�v3�j	*/
#define	M_SSEC_TOFS3S_EDGE_P(x)	(x)	/* �n��_P (x=1�`999)	*/
#define	M_SSEC_TOFS3S_LENG_X(x)	(1000 + (x))	/* X�H� (x=1�`999)	*/
#define	M_SSEC_TOFS3S_LENG_Y(x)	(2000 + (x))	/* Y�H� (x=1�`999)	*/
#define	M_SSEC_TOFS3S_LENG_Z(x)	(3000 + (x))	/* Z�H� (x=1�`999)	*/
#define	M_SSEC_TOFS3S_EDGE_R(x)	(4000 + (x))	/* �n��_R (x=1�`999)	*/
#define	M_SSEC_TOFS3S_WEAR_X(x)	(5000 + (x))	/* X���� (x=1�`999)	*/
#define	M_SSEC_TOFS3S_WEAR_Y(x)	(6000 + (x))	/* Y���� (x=1�`999)	*/
#define	M_SSEC_TOFS3S_WEAR_Z(x)	(7000 + (x))	/* Z���� (x=1�`999)	*/
#define	M_SSEC_TOFS3S_WEAR_R(x)	(8000 + (x))	/* R���� (x=1�`999)	*/

/* �H��Ǘ��f�[�^	*/
#define	M_SSEC_TOLMNG_TNO(x)	(0+(x))	/* �H��ԍ� (x=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_KIND(x)	(2000+(x))	/* �H���� �ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_RADIUS(x)	(4000+(x))	/* �H��a �ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_LENGTH(x)	(6000+(x))	/* �H��ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_DATA1(x)	(8000+(x))	/* �H��`��f�[�^�P�ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_DATA2(x)	(10000+(x))	/* �H��`��f�[�^�Q�ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_COLOR(x)	(12000+(x))	/* �H��F�ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_HOL_H(x)	(14000+(x))	/* �z���_�����ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_HOL_R(x)	(16000+(x))	/* �z���_���a�ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_TREGDAT_ALL(x)	(70000+(x))	/* �H��o�^�f�[�^�i�ꊇ�j�ix=1�`1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_FORMAT	100000	/* �H��Ǘ��f�[�^�t�H�[�}�b�g	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_TNO_CHK	100001	/* �H��Ǘ��H��ԍ��d���`�F�b�N	*//* P1X-A269A */

/* �n�����ʍH��I�t�Z�b�g�i�^�C�v2�j	*/

/* �n�����ʍH��I�t�Z�b�g�i�^�C�v3�j	*/

/* �����Ǘ��f�[�^	*/
#define	M_SSEC_TLIFEDAT_TOOL_NO(x)	(1000 + (x))	/* �H��ԍ� (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_STATUS(x)	(2000 + (x))	/* �X�e�[�^�X (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_MTHD(x)	(3000 + (x))	/* ���� (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_L_COMPEN(x)	(4000 + (x))	/* ���␳ (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_R_COMPEN(x)	(5000 + (x))	/* �a�␳ (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_USED(x)	(6000 + (x))	/* �g�p(���ԁA�񐔁A���՗�) (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_LIFE(x)	(7000 + (x))	/* ����(���ԁA�񐔁A���՗�) (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_AUXIL(x)	(8000 + (x))	/* �⏕ (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_GROUP_NO(x)	(9000 + (x))	/* �O���[�v�ԍ� (x=1�`1000)	*/
#define	M_SSEC_TLIFEDAT_DEL_GROUP	10001	/* �w�肵���O���[�v�ԍ��̃O���[�v���폜����	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_ADD_TOOL	10002	/* �H���V�K�ǉ�����	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_GROUPID	10003	/* �w�肵���O���[�v�ԍ��̃O���[�vID	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_GROUPNO(x)	(11000+(x))	/* �w�肵���O���[�vID�̃O���[�v�ԍ�(x=1�`1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_TOP_REC_ID(x)	(12000+(x))	/* �w�肵���O���[�vID�̐擪���R�[�hID(x=1�`1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_TLNOS_GROUPID(x)	(13000+(x))	/* �w�肵���O���[�vID�ɓo�^����Ă���H��{��(x=1�`1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_CHG_GROUP(x)	(14000+(x))	/* �w�肵���O���[�vID�̃O���[�v�ԍ���ύX����(x=1�`1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_DEL_TOOL(x)	(15000+(x))	/* �w�肵�����R�[�h�̍H����폜����(x=1�`1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_TOOLDATA(x)	(16000+(x))	/* �w�肵�����R�[�h�̍H����(x=1�`1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_GNO_DSP(x)	(17000+(x))	/* �w�肵���O���[�vID�̃O���[�v�ԍ��擾 (60��) (x=1�`1000)	*//* P1X-A104K */
#define	M_SSEC_TLIFEDAT_GRP_LIFE_INFO(x)	(18000+(x))	/* �w�肵���O���[�vID�̎������B���擾(60��) (x=1�`1000)	*//* P1X-A006BE */
#define	M_SSEC_TLIFEDAT_L1TOOL_USE_TIME(x)	(100000+(x))	/* �H��g�p�ώZ����(�H��ԍ� x=1�`200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1TOOL_LIFE_TIME(x)	(101000+(x))	/* �H������ݒ莞��(�H��ԍ� x=1�`200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1TOOL_USE_NUM(x)	(102000+(x))	/* �H��g�p�ώZ��(�H��ԍ� x=1�`200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1TOOL_LIFE_NUM(x)	(103000+(x))	/* �H������ݒ��(�H��ԍ� x=1�`200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1STATUS_A(x)	(104000+(x))	/* �X�e�[�^�XA(�H��ԍ� x=1�`200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1STATUS_B(x)	(105000+(x))	/* �X�e�[�^�XB(�H��ԍ� x=1�`200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1DEL_DAT(x)	(106000+(x))	/* �w�肳�ꂽ�H��̓��e���N���A����(�H��ԍ� x=1�`200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2DEL_GROUP	200000	/* �w�肵���O���[�v�ԍ��̃O���[�v���폜����	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2ADD_TOOL	200001	/* �H���V�K�ǉ�����	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_ID(x)	(201000+(x))	/* �w�肵���O���[�v�ԍ��̃O���[�vID(x=1�`9999: �O���[�v�ԍ�1�`9999)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_NO(x)	(220000+(x))	/* �w�肵���O���[�vID�̃O���[�v�ԍ�(x=1�`200: �O���[�vID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2TOP_REC_ID(x)	(221000+(x))	/* �w�肵���O���[�vID�̐擪���R�[�h�̍H��ID(x=1�`200: �O���[�vID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_TOOL_NUM(x)	(222000+(x))	/* �w�肵���O���[�vID�ɓo�^����Ă���H��{��(x=1�`200: �O���[�vID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2CHG_GROUP(x)	(223000+(x))	/* �w�肵���O���[�vID�̃O���[�v�ԍ���ύX����(x=1�`200: �O���[�vID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2DEL_TOOL(x)	(224000+(x))	/* �w�肵���H��ID�̃��R�[�h���폜����(x=1�`200: �H��ID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2TOOL_NO(x)	(225000+(x))	/* �w�肵���H��ID�̍H��No.(x=1�`200: �H��ID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2COMP_NO(x)	(226000+(x))	/* �w�肵���H��ID�̕␳No.(x=1�`200: �H��ID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_DATA(x)	(227000+(x))	/* �w�肵���H��ID�̎g�p(MIN) (x=1�`200: �H��ID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2STATUS(x)	(228000+(x))	/* �w�肵���H��ID��ST(x=1�`200: �H��ID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2SYSTEM(x)	(229000+(x))	/* �w�肵���H��ID�̕���(x=1�`200:�O���[�vID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2LIFE(x)	(230000+(x))	/* �w�肵���H��ID�̎���(x=1�`200:�O���[�vID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_LIFE_CHK(x)	(231000+(x))	/* �w�肵���O���[�vID�Ɏ����H����邩(x=1�`200: �O���[�vID0�`199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_GROUP_NO	232000	/* �g�p���H��̃O���[�vNo.	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_TOOL_NO	232001	/* �g�p���H��̍H��No.	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_COMP_NO	232002	/* �g�p���H��̕␳No.	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_SYSTEM	232003	/* �g�p���H��̕���	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_USEDATA	232004	/* �g�p���H��̎g�p(MIN)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_SUM	232005	/* �g�p���H��̍��v	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_LIFE	232006	/* �g�p���H��̎���	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_STATUS	232007	/* �g�p���H���ST	*//* P1X-A006f */

/* �����Ǘ����	*/
#define	M_SSEC_TLIFINF_TOOL_NOS	1	/* �����Ǘ��g�p�{��	*/
#define	M_SSEC_TLIFINF_GROUP_NOS	2	/* �����Ǘ��o�^�O���[�v��	*/
#define	M_SSEC_TLIFINF_CHG_FLAG	3	/* �����Ǘ��f�[�^�X�V�t���O	*//* P0Y-A013B */
#define	M_SSEC_TLIFINF_TOOL_MAX	4	/* �����Ǘ��ő�o�^�{��	*//* P1X-A006d */
#define	M_SSEC_TLIFINF_NEXT_TOOL	100	/* �����Ǘ�����g�p�H��ԍ�	*//* P1X-A354 */
#define	M_SSEC_TLIFINF_L1TOOL_MAX	1000	/* �����Ǘ��ő�o�^�{��(�k�nTYPE�T)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_L2TOOL_NOS	2000	/* �����Ǘ��g�p�{��(�k�nTYPE�U)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_L2ALL_GROUP_NOS	2001	/* �����Ǘ��o�^�O���[�v��(�k�nTYPE�U)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_L2TOOL_MAX	2002	/* �����Ǘ��ő�o�^�{��(�k�nTYPE�U)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_FORMAT	10000	/* �����Ǘ��f�[�^�t�H�[�}�b�g	*//* P1X-A006AG */

/* �H��o�^	*/
#define	M_SSEC_TOLREG_POT_NO(x)	(x)	/* �H��o�^�f�[�^(�|�b�g�ԍ�) (x=1�`360)	*/
#define	M_SSEC_TOLREG_TOOL_NO(x)	(1000 + (x))	/* �H��o�^�f�[�^(�H��ԍ�) (x=1�`360)	*/
#define	M_SSEC_TOLREG_D_NO(x)	(2000 + (x))	/* �H��o�^�f�[�^(�⏕:�c) (x=1�`360)	*/

/* �厲�E�ҋ@	*/
#define	M_SSEC_SPWAIT_TOOL_NO(x)	(x)	/* �厲�ҋ@(�H��ԍ�) (x=0�`4)	*/
#define	M_SSEC_SPWAIT_D_NO(x)	(10+(x))	/* �厲�ҋ@(�⏕D) (x=0�`4)	*//* P1X-A006U */
#define	M_SSEC_SPWAIT_DISP_NOS	200	/* �厲�ҋ@�\����	*/
#define	M_SSEC_SPWAIT_SPINDL_TLIFE	1000	/* �厲�H��̍H������Ǘ��f�[�^	*//* P0Y-A013E */
#define	M_SSEC_SPWAIT_WAIT_TLIFE	1001	/* �ҋ@�H��̍H������Ǘ��f�[�^	*//* P0Y-A013E */

/* �H��v��	*/
#define	M_SSEC_TLM_SW	1	/* TLM�X�C�b�`	*/
#define	M_SSEC_TLM_LAST_MOVE_DIRECTION	2	/* �ŏI�ړ�����	*//* P1X-A080 */
#define	M_SSEC_TLM_LAST_MOVE_AXIS	3	/* �ŏI�ړ���	*//* P1X-A080 */
#define	M_SSEC_TLM_SECOND_SKIP	4	/* 2��ڃX�L�b�v�ڐG	*//* P1X-A080 */
#define	M_SSEC_TLM_RST_INPUT_STS	5	/* ���Z�b�g���͏��	*//* P1X-A080 */
#define	M_SSEC_TLM_SKP_POS_READ_STS	6	/* �X�L�b�v�ʒu�ǎ����	*//* P1X-A080 */
#define	M_SSEC_TLM_TLMS_SW	100	/* TLMS ���(L�n�H��v��2)	*//* P1X-A128B */
#define	M_SSEC_TLM_L2_STS	101	/* �H��␳�ʌv�� ���(L�n�H��v��2)	*//* P1X-A128B */
#define	M_SSEC_TLM_EXTWOFS_STS	102	/* �O�����[�N���W�I�t�Z�b�g�v�� ���(L�n�H��v��2)	*//* P1X-A128B */
#define	M_SSEC_TLM_L2_START	103	/* �H��␳�ʌv���v��(L�n�H��v��2)	*//* P1X-A128B */
#define	M_SSEC_TLM_EXTWOFS_START	104	/* �O�����[�N���W�I�t�Z�b�g�v���v��(L�n�H��v��2)	*//* P1X-A128B */

/* �o�b�t�@�C��	*/
#define	M_SSEC_BUFEDT_STATUS	1	/* �o�b�t�@�C����	*//* P0Y-A013B */
#define	M_SSEC_BUFEDT_PATH	2	/* �o�b�t�@�C���v���O�����p�X	*//* P0Y-A013B */

/* �o�b�N�O�����h�`�F�b�N	*/
#define	M_SSEC_PRGCHK_OPT_BLKSKIP	1	/* �I�v�V���i���u���b�N�X�L�b�v	*//* P1X-A202A */

/* �t�@�C�����	*/
#define	M_SSEC_FILEINF_REG_PROG_NOS	1	/* ���H�v���O�����o�^�{��	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_USED_PROG_NOS	2	/* ���H�v���O�����c�{��	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_CAPA_CHAR_NOS	3	/* ���H�v���O�����L��������	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_FREE_CHAR_NOS	4	/* ���H�v���O�����c�蕶����	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_TRANS_SIZE	10	/*�]���σf�[�^�T�C�Y	*//* P0Y-A028B */

/* �v���O�����ꗗ(������)	*/

/* �v���O�����ꗗ(�Œ�T�C�N��)	*/

/* �v���O�����ꗗ(�@�B���[�J�}�N��)	*/

/* �v���O�����ꗗ(HD)	*/

/* �v���O�����ꗗ(IC�J�[�h)	*/

/* �v���O�����ꗗ(FLD)	*/

/* �v���O�����ꗗ(�C�[�T�l�b�g)	*/

/* ���x���	*/
#define	M_SSEC_SPDINF_FC	1	/* FC(�������x)	*/
#define	M_SSEC_SPDINF_FA	2	/* FA�FF�w�ߑ��葬�x	*/
#define	M_SSEC_SPDINF_FH	3	/* FH�F��[���x	*//* P1X-A125 */
#define	M_SSEC_SPDINF_DISP_FC	101	/* ���x�\��FC(�������x)	*//* P1X-A006 */

/* �厲���	*/
#define	M_SSEC_SPINF_REV_SPD	1	/* �厲��]���x(rev/min)	*/
#define	M_SSEC_SPINF_LOD	2	/* �厲���גl	*/
#define	M_SSEC_SPINF_OPT_SP_NO	1000	/* ���厲�̎厲�ԍ�	*//* P1X-A091A */
#define	M_SSEC_SPINF_MET_SP_NO	1001	/* ���^���厲�̎厲�ԍ�	*//* P1X-A091A */
#define	M_SSEC_SPINF_OPT_SP_NUM	1002	/* ���厲�̑�����	*//* P1X-A091A */
#define	M_SSEC_SPINF_MET_SP_NUM	1003	/* ���^���厲�̑�����	*//* P1X-A091A */

/* �^�]���	*/
#define	M_SSEC_EXST_MACRO_EXEC_LV	1	/* �}�N�����s���x��	*/
#define	M_SSEC_EXST_BUSY_COLLATION	2	/* �ƍ���~�����	*/
#define	M_SSEC_EXST_COLLATION_O	3	/* �ƍ���~O�ԍ�	*//* P1X-A107 */
#define	M_SSEC_EXST_COLLATION_N	4	/* �ƍ���~N�ԍ�	*//* P1X-A107 */
#define	M_SSEC_EXST_COLLATION_B	5	/* �ƍ���~B�ԍ�	*//* P1X-A107 */
#define	M_SSEC_EXST_COLLATION_PATH	6	/* �ƍ���~�p�X��	*//* P1X-A107 */
#define	M_SSEC_EXST_NC_RUN_STATUS	10	/* �^�]���1(�^�]�X�e�[�^�X)	*/
#define	M_SSEC_EXST_NC_RUN_MODE	11	/* �^�]���2(�^�]���[�h)	*/
#define	M_SSEC_EXST_AUTO_STL	20	/* �����^�]�N����	*/
#define	M_SSEC_EXST_OPERATION	21	/* �����^�]��	*/
#define	M_SSEC_EXST_STOP_OPERATION	22	/* �����^�]�x�~��	*/
#define	M_SSEC_EXST_LOCK_KEY_1	100	/* �f�[�^�ی�L�[1	*/
#define	M_SSEC_EXST_LOCK_KEY_2	101	/* �f�[�^�ی�L�[2	*/
#define	M_SSEC_EXST_LOCK_KEY_3	102	/* �f�[�^�ی�L�[3	*/
#define	M_SSEC_EXST_PISW1	200	/* �O�����͐M��1	*//* P0Y-A013B */
#define	M_SSEC_EXST_PIJSP	201	/* JOG���[�h(����)�M��	*//* P0Y-A013B */
#define	M_SSEC_EXST_PODT1	202	/* NC��ԏo�͐M��1	*//* P0Y-A013B */
#define	M_SSEC_EXST_POAL	203	/* �A���[����ԐM��	*//* P0Y-A013B */
#define	M_SSEC_EXST_AUTO_MOD	204	/* �^�](����)���[�h�֘A�M��	*//* P0Y-A013B */
#define	M_SSEC_EXST_MANU_MOD	205	/* �^�](�蓮)���[�h�֘A�M��	*//* P0Y-A013B */
#define	M_SSEC_EXST_RST_STS	206	/* �ĊJ�T�[�`���	*//* P0Y-A013B */
#define	M_SSEC_EXST_RST_TP1STS	207	/* �ĊJ�T�[�`�^�C�v1�L��	*//* P0Y-A013B */
#define	M_SSEC_EXST_EXSRCH_STS	208	/* �g���^�]�T�[�`���	*//* P0Y-A013B */
#define	M_SSEC_EXST_EXSRCH_LINE	209	/* �T�[�`���̌��݃T�[�`�s�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_EXST_CHECK_STS	210	/* �`�F�b�N�����	*//* P0Y-A038 */
#define	M_SSEC_EXST_3D_M_CHECK_STS	211	/* 3D�@�B���`�F�b�N�����	*//* P1X-A269M */
#define	M_SSEC_EXST_PRON	220	/* �d���ē����v�p�����[�^�t���O	*//* P1X-A006 */
#define	M_SSEC_EXST_PLC_RUN_STOP	221	/* PLC Run/Stop���	*//* P1X-A006E */
#define	M_SSEC_EXST_MDI_STS	222	/* MDI�ݒ���	*//* P1X-A006R */
#define	M_SSEC_EXST_MDI_CLR_STS	223	/* MDI�N���A����	*//* P1X-A348 */
#define	M_SSEC_EXST_CONNECT_STS	224	/* ����Network�ڑ������	*//* P1X-A020AX */
#define	M_SSEC_EXST_RAS_INPOSITION	300	/* �C���|�W�V����	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_INTERLOCK_P	310	/* �C���^���b�N(+)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_INTERLOCK_N	311	/* �C���^���b�N(-)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_EXTDCC_P	320	/* �O������(+)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_EXTDCC_N	321	/* �O������(-)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAPID_OVERRIDE	330	/* ������I�[�o���C�h	*//* P1X-A167 */
#define	M_SSEC_EXST_SCRN_REQ_UP	400	/* Y729(��ʕ\���v���M��)�̗����M��	*//* P1X-A276 */
#define	M_SSEC_EXST_SCRN_REQ_DOWN	401	/* Y729(��ʕ\���v���M��)�̗�����M��	*//* P1X-A276 */
#define	M_SSEC_EXST_MACRO_ALM	500	/* �}�N���A���[���������	*//* P1X-A006BB */

/* ���X�e�[�^�X	*/
#define	M_SSEC_AXISSTS_POFF	1	/* ���X�e�[�^�X(�����O��)	*/
#define	M_SSEC_AXISSTS_SVOF	2	/* ���X�e�[�^�X(�T�[�{�I�t)	*/
#define	M_SSEC_AXISSTS_REF1	3	/* ���X�e�[�^�X(��1ref)	*/
#define	M_SSEC_AXISSTS_REF2	4	/* ���X�e�[�^�X(��2ref)	*/
#define	M_SSEC_AXISSTS_REF3	5	/* ���X�e�[�^�X(��3ref)	*/
#define	M_SSEC_AXISSTS_REF4	6	/* ���X�e�[�^�X(��4ref)	*/
#define	M_SSEC_AXISSTS_MR	7	/* ���X�e�[�^�X(�~���[�C���[�W)	*/
#define	M_SSEC_AXISSTS_RSTAT	8	/* ���X�e�[�^�X(�ĊJ�T�[�`RP)	*/
#define	M_SSEC_AXISSTS_CT	9	/* ���X�e�[�^�X(�⏕�����CT)	*//* P1X-A299J */
#define	M_SSEC_AXISSTS_SVOF_AL	100	/* ���X�e�[�^�X(�T�[�{�I�t)�S��	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF1_AL	101	/* ���X�e�[�^�X(��1ref)�S��	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF2_AL	102	/* ���X�e�[�^�X(��2ref)�S��	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF3_AL	103	/* ���X�e�[�^�X(��3ref)�S��	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF4_AL	104	/* ���X�e�[�^�X(��4ref)�S��	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_MR_AL	105	/* ���X�e�[�^�X(�~���[�C���[�W�j�S��	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_RP_AL	106	/* ���X�e�[�^�X(�ĊJ�T�[�`RP)�S��	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_PROG_MR_AL	200	/* �v���O�����~���[���i�S���j	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_AXOFST	201	/* �����O�������	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_FDT_DIRECT	202	/* ���ړ�����(FDT����)	*//* P1X-A006AC */

/* �J�E���^	*/
#define	M_SSEC_CNTR_POS_WRK	1	/* ���[�N���W�ʒu�J�E���^	*/
#define	M_SSEC_CNTR_POS_MCH	2	/* �@�B�ʒu�J�E���^	*/
#define	M_SSEC_CNTR_POS_CURRENT	3	/* ���݈ʒu�J�E���^	*/
#define	M_SSEC_CNTR_POS_RELATV	4	/* ���Έʒu�J�E���^	*/
#define	M_SSEC_CNTR_POS_PROGRAM	5	/* �v���O�����ʒu�J�E���^	*/
#define	M_SSEC_CNTR_DISTANCE	6	/* �c�w��	*/
#define	M_SSEC_CNTR_SKIP	7	/* �X�L�b�v���W�J�E���^�i���[�N���W�j	*/
#define	M_SSEC_CNTR_INTER	8	/* �蓮�����ݗ�1(ABS Off)	*/
#define	M_SSEC_CNTR_INTER2	9	/* �蓮�����ݗ�2(ABS On)	*/
#define	M_SSEC_CNTR_NEXT	10	/* ���w��	*/
#define	M_SSEC_CNTR_POS_RESTART	11	/* �ĊJ�ʒu�J�E���^�i���[�N���W�j	*/
#define	M_SSEC_CNTR_POS_RE_DIST	12	/* �ĊJ�c�����J�E���^	*/
#define	M_SSEC_CNTR_POS_RE_MCH	13	/* �ĊJ�ʒu�J�E���^(�@�B���W�j	*//* P0Y-A013B */
#define	M_SSEC_CNTR_POS_PROG2	14	/* �v���O�����ʒu�J�E���^�Q	*//* P0Y-A013B */
#define	M_SSEC_CNTR_POS_TLM	15	/* TLM�ʒu�J�E���^	*/
#define	M_SSEC_CNTR_TLM_SKIP	16	/* TLM�X�L�b�v�ʒu�J�E���^(mxtlms)	*//* P0Y-A013B */
#define	M_SSEC_CNTR_TLM	17	/* TLM�ʒu�J�E���^(mxtlm)	*//* P0Y-A013B */
#define	M_SSEC_CNTR_MXSKPM	18	/* �X�L�b�v���W�J�E���^�i�@�B���W�j	*//* P0Y-A013E */
#define	M_SSEC_CNTR_MXSKPR	19	/* �X�L�b�v�c�����J�E���^	*//* P0Y-A013E */
#define	M_SSEC_CNTR_LM	20	/* ��ԍ����x�N�g�����ilm)	*//* P0Y-A013E */
#define	M_SSEC_CNTR_POS_CURRENT_B	21	/* ���݈ʒuB�J�E���^	*//* P0Y-A013c */
#define	M_SSEC_CNTR_SKIP_WORK	22	/* �X�L�b�v�@�B�l�imanual skip position�j	*//* P1X-A080 */
#define	M_SSEC_CNTR_SKP_COORD_POS	23	/* �X�L�b�v���W�ʒu(�X�L�b�v���W�J�E���^)	*//* P1X-A080 */
#define	M_SSEC_CNTR_MEAS_POS	24	/* ����ʒu	*//* P1X-A080 */
#define	M_SSEC_CNTR_POS_TIP_M	25	/* ��[�@�B�ʒu	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_TIP_W	26	/* ��[���[�N�ʒu	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_T_HDL	27	/* �H��ړ���(ABS�I�t)	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_MECHA1	28	/* ��1���J���p�x	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_MECHA2	29	/* ��2���J���p�x	*//* P1X-A125 */
#define	M_SSEC_CNTR_GTR_POS_MCH	30	/* �@�B�ʒu�J�E���^(�g���[�X�p)	*//* P1X-A006r */
#define	M_SSEC_CNTR_GTR_POS_WRK	31	/* ���[�N���W�J�E���^�i�g���[�X�p�j	*//* P1X-A006r */
#define	M_SSEC_CNTR_POS_MCH_DATA	32	/* �@�B�ʒu�J�E���^�i�X�Ύ������j	*//* P1X-A100G */
#define	M_SSEC_CNTR_POS_FB	33	/* �t�B�[�h�o�b�N�ʒu	*//* P1X-A308 */
#define	M_SSEC_CNTR_TABLE	34	/* �e�[�u�����W�n�J�E���^	*//* P1X-A326 */
#define	M_SSEC_CNTR_WORKPOS	35	/* ���[�N�ݒu���W�n�J�E���^	*//* P1X-A326 */
#define	M_SSEC_CNTR_SLOPE	36	/* �X�Ζʍ��W�n�J�E���^	*//* P1X-A326 */
#define	M_SSEC_CNTR_POS_STDCOORD	37	/* ����W�ʒu�J�E���^	*//* P1X-A451 */
#define	M_SSEC_CNTR_GTR_POS_TOOL	38	/* �H��ʒu�J�E���^(�g���[�X�p)	*//* P1X-A020BK */
#define	M_SSEC_CNTR_TLM1_POS_TOOL	39	/* L�n�蓮�H�����1�̍H���_	*//* P1X-A466 */
#define	M_SSEC_CNTR_TLM1_WRK	40	/* L�n�蓮�H�����1�J�E���^(���[�N���W�n�I�t�Z�b�g����) (���[�N���W�ʒu+�蓮�����ݗ�1(ABS Off))	*//* P1X-A473 */
#define	M_SSEC_CNTR_CNTR_ZERO	50	/* �J�E���^�E�[��	*/
#define	M_SSEC_CNTR_ORG_ZERO	51	/* �I���W���E�[��	*/
#define	M_SSEC_CNTR_ORG_CANCEL	52	/* �I���W���L�����Z��	*//* P1X-A114 */
#define	M_SSEC_CNTR_POS_INDEXDIST	10000	/* ���o�c�����J�E���^	*//* P1X-A451 */

/* MSTB���s���	*/
#define	M_SSEC_MSTBE_M_COD	1	/* M�w��/�蓮���l�w��(M1)	*/
#define	M_SSEC_MSTBE_M2_COD	2	/* M�w��/�蓮���l�w��(M2)	*/
#define	M_SSEC_MSTBE_M3_COD	3	/* M�w��/�蓮���l�w��(M3)	*/
#define	M_SSEC_MSTBE_M4_COD	4	/* M�w��/�蓮���l�w��(M4)	*/
#define	M_SSEC_MSTBE_S_COD	101	/* M�w��/�蓮���l�w��(S1)	*/
#define	M_SSEC_MSTBE_S2_COD	102	/* M�w��/�蓮���l�w��(S2)	*/
#define	M_SSEC_MSTBE_S3_COD	103	/* M�w��/�蓮���l�w��(S3)	*/
#define	M_SSEC_MSTBE_S4_COD	104	/* M�w��/�蓮���l�w��(S4)	*/
#define	M_SSEC_MSTBE_S5_COD	105	/* M�w��/�蓮���l�w��(S5)	*//* P1X-A297 */
#define	M_SSEC_MSTBE_S6_COD	106	/* M�w��/�蓮���l�w��(S6)	*//* P1X-A297 */
#define	M_SSEC_MSTBE_T_COD	201	/* M�w��/�蓮���l�w��(T1)	*/
#define	M_SSEC_MSTBE_T_CMD	251	/* L�nT�w��(�H��ԍ�+�␳��)	*//* P1X-A513 */
#define	M_SSEC_MSTBE_B_COD	301	/* M�w��/�蓮���l�w��(B1)	*/
#define	M_SSEC_MSTBE_B2_COD	302	/* M�w��/�蓮���l�w��(B2)	*/
#define	M_SSEC_MSTBE_B3_COD	303	/* M�w��/�蓮���l�w��(B3)	*/
#define	M_SSEC_MSTBE_B4_COD	304	/* M�w��/�蓮���l�w��(B4)	*/
#define	M_SSEC_MSTBE_RST_T	401	/* �ĊJ�T�[�`T�w�ߗ���	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_S1	411	/* �ĊJ�T�[�`S1�w�ߗ���	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_S2	412	/* �ĊJ�T�[�`S2�w�ߗ���	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_S3	413	/* �ĊJ�T�[�`S3�w�ߗ���	*//* P1X-A079C */
#define	M_SSEC_MSTBE_RST_S4	414	/* �ĊJ�T�[�`S4�w�ߗ���	*//* P1X-A079C */
#define	M_SSEC_MSTBE_RST_S5	415	/* �ĊJ�T�[�`S5�w�ߗ���	*//* P1X-A297 */
#define	M_SSEC_MSTBE_RST_S6	416	/* �ĊJ�T�[�`S6�w�ߗ���	*//* P1X-A297 */
#define	M_SSEC_MSTBE_RST_B	421	/* �ĊJ�T�[�`B�w�ߗ���	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_M	431	/* �ĊJ�T�[�`M�w�ߗ���	*//* P0Y-A013B */

/* PLC���	*/
#define	M_SSEC_PLCINF_SIG	1	/* PLC�M�����	*/

/* �ώZ����	*/
#define	M_SSEC_RTIME_POWER_ON	1	/* �d��������	*/
#define	M_SSEC_RTIME_AUTO_OP	2	/* �����^�]����	*/
#define	M_SSEC_RTIME_AUTO_STL	3	/* �����N������	*/
#define	M_SSEC_RTIME_EXT1	4	/* �O���ώZ����1	*/
#define	M_SSEC_RTIME_EXT2	5	/* �O���ώZ����2	*/
#define	M_SSEC_RTIME_DATE	6	/* ���t	*/
#define	M_SSEC_RTIME_TIME	7	/* ����	*/
#define	M_SSEC_RTIME_CYCLE	8	/* �T�C�N������	*//* P1X-A020H */
#define	M_SSEC_RTIME_PROCESS_TIME	100	/* ���H���ԎZ�o	*//* P1X-A084A */

/* G���[�_��	*/
#define	M_SSEC_GMDL_G(x)	(x)	/* G�R�[�h (x=�O���[�v1�`27)	*//* P0Y-A013D */
#define	M_SSEC_GMDL_GEO_MC_NO	51	/* �`��(�a)�␳���[�_���̍H��␳�ԍ�	*/
#define	M_SSEC_GMDL_GEO_RADIUS	52	/* �`��(�a)�␳���[�_���̕␳��	*/
#define	M_SSEC_GMDL_GEO_WEAR	53	/* �`��(�a)�␳���[�_���̖��՗�	*/
#define	M_SSEC_GMDL_WEAR_MC_NO	54	/* �a�␳���[�_���̂̍H��Քԍ�	*/
#define	M_SSEC_GMDL_TPOS	55	/* �g�p���H��̈ʒu�␳�x�N�g��	*//* P1X-A006h */
#define	M_SSEC_GMDL_LENG_MC_NO	101	/* ���␳���[�_���̍H��␳�ԍ�	*/
#define	M_SSEC_GMDL_LENG_AXIS	102	/* ���␳���[�_���̎�����	*/
#define	M_SSEC_GMDL_LENG_OFFSET	103	/* ���␳���[�_���̕␳��	*/
#define	M_SSEC_GMDL_LENG_WEAR	104	/* ���␳���[�_���̖��՗�	*/
#define	M_SSEC_GMDL_H_COMP_AL	105	/* ���␳�������i�S���j	*//* P0Y-A013B */
#define	M_SSEC_GMDL_H_COMP_NO	106	/* ���␳���[�_���̍H��␳�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_GMDL_SCALE_MAG	201	/* �X�P�[�����O�{��(G50P_)[Grp11]	*/
#define	M_SSEC_GMDL_COORD_ROT	202	/* ���W��]�p�x(G68R_)[Grp16]	*/
#define	M_SSEC_GMDL_H_SPEED_MODE	203	/* �������H���|�h(G5P_)	*/
#define	M_SSEC_GMDL_GMOV	204	/* gmov �؍�^��؍�w��	*//* P0Y-A013B */
#define	M_SSEC_GMDL_AWOFS_NO	205	/* �g�����[�N���W�I��(G54.1P_)	*//* P0Y-A013B */
#define	M_SSEC_GMDL_CUTTING_STS	206	/* �؍풆���	*//* P0Y-A013B */
#define	M_SSEC_GMDL_SCALE_MAG2	207	/* �X�P�[�����O�{��(G50P_)[Grp11] (Magic�݊�)	*//* P0Y-A013J */
#define	M_SSEC_GMDL_COORD_ROT2	208	/* ���W��]�p�x(G68R_)[Grp16] (Magic�݊�)	*//* P0Y-A013J */
#define	M_SSEC_GMDL_3D_DISP_STS	209	/* 3�������W�ϊ���ԁi���[�N���W�I��G68�\���p�j	*//* P1X-A059 */
#define	M_SSEC_GMDL_H_SPEED_SPLINE	210	/* �X�v���C����ԃ��[�h	*//* P1X-B104 */
#define	M_SSEC_GMDL_H_SPEED_SSS	211	/* SSS����	*//* P1X-B104 */
#define	M_SSEC_GMDL_PREMOD	212	/* �����x���䃂�[�h(G08P)	*//* P1X-A089B */
#define	M_SSEC_GMDL_WAC_NO	213	/* ���[�N�ݒu�덷�␳�I��(G54.4P_)	*//* P1X-A426 */
#define	M_SSEC_GMDL_APPLICATION	301	/* �I�𒆉��H�p�r	*//* P1X-A517 */
#define	M_SSEC_GMDL_ACC_LV	302	/* �I�𒆏���	*//* P1X-A517 */
#define	M_SSEC_GMDL_FEED_MODE	500	/* ������	*//* P1X-A020BK */

/* F���[�_��	*/
#define	M_SSEC_FMDL_FA	1	/* �v���O�����w��F���[�_��(FA)	*/
#define	M_SSEC_FMDL_FM	2	/* �蓮���葬�x(FM)	*/
#define	M_SSEC_FMDL_FS	3	/* �������葬�x(FS)	*/
#define	M_SSEC_FMDL_FE	4	/* �˂��؂胊�[�h(FE)	*/
#define	M_SSEC_FMDL_DWELL	5	/* �h�E�F���c�莞��	*/
#define	M_SSEC_FMDL_G96S(x)	(10 + (x))	/* ������萧��i�����xS)�@(x=1�`6)	*//* P0Y-A013B */

/* MSTB���[�_��	*/
#define	M_SSEC_MSTBMDL_S(x)	(x)	/* S���[�_��(S1�`S6) (x=1�`6)	*/
#define	M_SSEC_MSTBMDL_T(x)	(100 + (x))    	/* T���[�_��(T1�`T2) (x=1�`2)	*/
#define	M_SSEC_MSTBMDL_M(x)	(200 + (x))    	/* M���[�_��(M1�`M4) (x=1�`4)	*/
#define	M_SSEC_MSTBMDL_B(x)	(300 + (x))    	/* B���[�_��(B1�`B4) (x=1�`4)	*/

/* �m�����[�_�����	*/

/* �v���O�������s���	*/
#define	M_SSEC_PGST_NEST_LEBEL	1	/* ���s���T�u�v���O�����̃l�X�g���x��	*/
#define	M_SSEC_PGST_INVLD_STS1	2	/* ������ԁF�V���O���u���b�N�EMST����	*//* P0Y-A013B */
#define	M_SSEC_PGST_INVLD_STS2	3	/* ������ԁFFeed�z�[���h�E�I�[�o���C�h�E�C�O�U�N�g	*//* P0Y-A013B */
#define	M_SSEC_PGST_ACT_PROG_PATH	100	/* ���s���v���O�����̃��C��Prog�p�X	*//* P0Y-A013B */
#define	M_SSEC_PGST_ACT_MAIN_O	101	/* ���s�����C�� O�ԍ�	*/
#define	M_SSEC_PGST_ACT_MAIN_N	102	/* ���s�����C�� N�ԍ�	*/
#define	M_SSEC_PGST_ACT_MAIN_B	103	/* ���s�����C�� B�ԍ�	*/
#define	M_SSEC_PGST_ACT_MAIN_PER	105	/* ���s�����C�� �����\��(%)	*//* P1X-A410 */
#define	M_SSEC_PGST_ACT_SUB_O	201	/* ���s���T�u O�ԍ�	*/
#define	M_SSEC_PGST_ACT_SUB_N	202	/* ���s���T�u N�ԍ�	*/
#define	M_SSEC_PGST_ACT_SUB_B	203	/* ���s���T�u B�ԍ�	*/
#define	M_SSEC_PGST_ACT_SUB_PER	205	/* ���s���T�u �����\��(%)	*//* P1X-A410 */
#define	M_SSEC_PGST_BUFF_PRG_POS	210	/* �o�b�t�@�\���v���O�����̕\���ʒu�i�v���O�����擪�����byte���j	*//* P1X-A020AV */
#define	M_SSEC_PGST_RUN_AFTER_SRCH	211	/* �T�[�`��̎����N�������{���	*//* P1X-A232 */
#define	M_SSEC_PGST_LST_PROG_PATH	300	/* �Ō�ɉ^�]�����v���O�����̃p�X	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_MAIN_O	301	/* �Ō�ɉ^�]�����v���O�����̃��C��O�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_MAIN_N	302	/* �Ō�ɉ^�]�����v���O�����̃��C��N�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_MAIN_B	303	/* �Ō�ɉ^�]�����v���O�����̃��C��B�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_O	401	/* �Ō�ɉ^�]�����v���O�����̃T�uO�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_N	402	/* �Ō�ɉ^�]�����v���O�����̃T�uN�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_B	403	/* �Ō�ɉ^�]�����v���O�����̃T�uB�ԍ�	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_P	404	/* �Ō�ɉ^�]�����v���O�����̃T�uP�ԍ�	*//* P1X-A079D */
#define	M_SSEC_PGST_SRCH_N	501	/* �T�[�`����N�ԍ�	*//* P1X-B316 */
#define	M_SSEC_PGST_SRCH_B	502	/* �T�[�`����B�ԍ�	*//* P1X-B316 */

/* �v���O�����c���[	*/
#define	M_SSEC_TREE_MAIN_DEV	1	/* ���s�����C�� �f�o�C�X��	*/
#define	M_SSEC_TREE_MAIN_O	2	/* ���s�����C�� O�ԍ�	*/
#define	M_SSEC_TREE_MAIN_N	3	/* ���s�����C�� N�ԍ�	*/
#define	M_SSEC_TREE_MAIN_B	4	/* ���s�����C�� B�ԍ�	*/
#define	M_SSEC_TREE_SUB_DEV(x)	(100 + (x))    	/* ���s���T�u1�`10 �f�o�C�X�� (x=1�`10)	*/
#define	M_SSEC_TREE_SUB_O(x)	(200 + (x))    	/* ���s���T�u1�`10 O�ԍ� (x=1�`10)	*/
#define	M_SSEC_TREE_SUB_N(x)	(300 + (x))    	/* ���s���T�u1�`10 N�ԍ� (x=1�`10)	*/
#define	M_SSEC_TREE_SUB_B(x)	(400 + (x))    	/* ���s���T�u1�`10 B�ԍ� (x=1�`10)	*/
#define	M_SSEC_TREE_SUB_L(x)	(500 + (x))    	/* ���s���T�u1�`10 �J�Ԃ��� (x=1�`10)	*/
#define	M_SSEC_TREE_PROG_LIST	1000	/* ���s���v���O�����c���[���(ONB) �\���v���O������	*//* P0Y-A013B */
#define	M_SSEC_TREE_PROG_LIST2	1001	/* ���s���v���O�����c���[���(ONB) �����v���O������	*//* P1X-A307 */
#define	M_SSEC_TREE_PROG_LIST_PATH(x)	(1100 + (x))	/* ���s���v���O�����̃p�X���(X=1�`2) ��HMI����͎g�p�֎~	*//* P1X-A099W */

/* �O���t�B�b�N�`�F�b�N�p�v���O�����c���[	*/
#define	M_SSEC_TREEGC_MAIN_O	1	/* �`�F�b�N�p���s���C�� O�ԍ�	*/
#define	M_SSEC_TREEGC_MAIN_N	2	/* �`�F�b�N�p���s���C�� N�ԍ�	*/
#define	M_SSEC_TREEGC_MAIN_B	3	/* �`�F�b�N�p���s���C�� B�ԍ�	*/

/* �C�ӎ��d��f�[�^	*/

/* NC�A���[���i�G���[�E�x���j	*/

/* PLC�A���[��	*/

/* PLC�x���i�I�y���[�^���b�Z�[�W�j	*/

/* PLC�f�o�C�X(bit)	*/
#define	M_SSEC_PLBIT_X_1SHOT(x)	(1 + (x))	/* �f�o�C�XX (x=0�`2815�@/ [M7] x=0�`8191)	*/
#define	M_SSEC_PLBIT_Y_1SHOT(x)	(10000 + (x))	/* �f�o�C�XY (x=0�`3583�@/ [M7] x=0�`8191)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_M_1SHOT(x)	(20000 + (x))	/* �f�o�C�XM (x=0�`8191�@/ [M7] x=0�`10239)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_F_1SHOT(x)	(40000 + (x))	/* �f�o�C�XF (x=0�`255�@  / [M7] x=0�`1024)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_L_1SHOT(x)	(50000 + (x))	/* �f�o�C�XL (x=0�`255 �@ / [M7] x=0�`511)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_SM_1SHOT(x)	(60000 + (x))	/* �f�o�C�XSM (x=0�`127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_T_1SHOT(x)	(70000 + (x))	/* �f�o�C�XT (x=0�`1255�@/ [M7] x=0�`1703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_C_1SHOT(x)	(80000 + (x))	/* �f�o�C�XC(x=0�`1127 �@/ [M7] x=0�`1255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_E_1SHOT(x)	(90000 + (x))	/* �f�o�C�XE (x=0�`127)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_U_1SHOT(x)	(100000 + (x))	/* �f�o�C�XU (x=0�`383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_W_1SHOT(x)	(110000 + (x))	/* �f�o�C�XW (x=0�`511)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_B_1SHOT(x)	(120000 + (x))	/* �f�o�C�XB (x=0�`1103 �@/ [M7] x=0�`8191)(PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_G_1SHOT(x)	(130000 + (x))	/* �f�o�C�XG (x=0�`3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_I_1SHOT(x)	(140000 + (x))	/* �f�o�C�XI (x=0�`1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_J_1SHOT(x)	(150000 + (x))	/* �f�o�C�XJ (x=0�`1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_Q_1SHOT(x)	(160000 + (x))	/* �f�o�C�XQ (x=0�`1151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_S_1SHOT(x)	(170000 + (x))	/* �f�o�C�XS (x=0�`319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_SB_1SHOT(x)	(180000 + (x))	/* �f�o�C�XSB (x=0�`511)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_V_1SHOT(x)	(190000 + (x))	/* �f�o�C�XV   (x=0�`255)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_ST_1SHOT(x)	(200000 + (x))	/* �f�o�C�XST (x=0�`1063)(M7 GPPW)	*//* P1X-A030 */

/* PLC�f�o�C�X(char)	*/
#define	M_SSEC_PLCHR_X_1SHOT(x)	(1 + (x))	/* �f�o�C�XX (x=0�`2815�@/ [M7] x=0�`8191)	*/
#define	M_SSEC_PLCHR_Y_1SHOT(x)	(10000 + (x))	/* �f�o�C�XY (x=0�`3583�@/ [M7] x=0�`8191)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_M_1SHOT(x)	(20000 + (x))	/* �f�o�C�XM (x=0�`8191�@/ [M7] x=0�`10239)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_F_1SHOT(x)	(40000 + (x))	/* �f�o�C�XF (x=0�`255�@  / [M7] x=0�`1024)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_L_1SHOT(x)	(50000 + (x))	/* �f�o�C�XL (x=0�`255 �@ / [M7] x=0�`511)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_SM_1SHOT(x)	(60000 + (x))	/* �f�o�C�XSM (x=0�`127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_T_1SHOT(x)	(70000 + (x))	/* �f�o�C�XT (x=0�`1255�@/ [M7] x=0�`1703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_C_1SHOT(x)	(80000 + (x))	/* �f�o�C�XC(x=0�`1127 �@/ [M7] x=0�`1255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_E_1SHOT(x)	(90000 + (x))	/* �f�o�C�XE (x=0�`127)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_U_1SHOT(x)	(100000 + (x))	/* �f�o�C�XU (x=0�`383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_W_1SHOT(x)	(110000 + (x))	/* �f�o�C�XW (x=0�`511)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_B_1SHOT(x)	(120000 + (x))	/* �f�o�C�XB (x=0�`1103 �@/ [M7] x=0�`8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_G_1SHOT(x)	(130000 + (x))	/* �f�o�C�XG (x=0�`3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_I_1SHOT(x)	(140000 + (x))	/* �f�o�C�XI (x=0�`1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_J_1SHOT(x)	(150000 + (x))	/* �f�o�C�XJ (x=0�`1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_Q_1SHOT(x)	(160000 + (x))	/* �f�o�C�XQ (x=0�`1151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_S_1SHOT(x)	(170000 + (x))	/* �f�o�C�XS (x=0�`319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_SB_1SHOT(x)	(180000 + (x))	/* �f�o�C�XSB (x=0�`511)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_V_1SHOT(x)	(190000 + (x))	/* �f�o�C�XV   (x=0�`255)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_ST_1SHOT(x)	(200000 + (x))	/* �f�o�C�XST (x=0�`1063)(M7 GPPW)	*//* P1X-A030 */

/* PLC�f�o�C�X(word)	*/
#define	M_SSEC_PLWRD_X_1SHOT(x)	(1 + (x))	/* �f�o�C�XX (x=0�`2815�@/ [M7] x=0�`8191)	*/
#define	M_SSEC_PLWRD_Y_1SHOT(x)	(10000 + (x))	/* �f�o�C�XY (x=0�`3583�@/ [M7] x=0�`8191)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_M_1SHOT(x)	(20000 + (x))	/* �f�o�C�XM (x=0�`8191�@/ [M7] x=0�`10239)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_F_1SHOT(x)	(40000 + (x))	/* �f�o�C�XF (x=0�`255�@  / [M7] x=0�`1024)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_L_1SHOT(x)	(50000 + (x))	/* �f�o�C�XL (x=0�`255 �@ / [M7] x=0�`511)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_SM_1SHOT(x)	(60000 + (x))	/* �f�o�C�XSM (x=0�`127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_T_1SHOT(x)	(70000 + (x))	/* �f�o�C�XT (x=0�`4255  / [M7] x=0�`4703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_C_1SHOT(x)	(80000 + (x))	/* �f�o�C�XC (x=0�`4127  / [M7] x=0�`4255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_D_1SHOT(x)	(90000 + (x))	/* �f�o�C�XD (x=0�`1023  / [M7] x=0�`2047)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_R_1SHOT(x)	(100000 + (x))	/* �f�o�C�XR (x=0�`8191  / [M7] x=0�`13311)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_E_1SHOT(x)	(120000 + (x))	/* �f�o�C�XE (x=0�`127)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_U_1SHOT(x)	(130000 + (x))	/* �f�o�C�XU (x=0�`383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_W_1SHOT(x)	(140000 + (x))	/* �f�o�C�XW (x=0�`511   /[M7] x=0�`8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_B_1SHOT(x)	(150000 + (x))	/* �f�o�C�XB (x=0�`4103  /[M7] x=0�`8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_G_1SHOT(x)	(160000 + (x))	/* �f�o�C�XG (x=0�`3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_I_1SHOT(x)	(170000 + (x))	/* �f�o�C�XI (x=0�`1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_J_1SHOT(x)	(180000 + (x))	/* �f�o�C�XJ (x=0�`1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_Q_1SHOT(x)	(190000 + (x))	/* �f�o�C�XQ (x=0�`4151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_S_1SHOT(x)	(200000 + (x))	/* �f�o�C�XS (x=0�`319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_SB_1SHOT(x)	(210000 + (x))	/* �f�o�C�XSB (x=0�`511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_V_1SHOT(x)	(220000 + (x))	/* �f�o�C�XV   (x=0�`255) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_SW_1SHOT(x)	(230000 + (x))	/* �f�o�C�XSW (x=0�`511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_SD_1SHOT(x)	(240000 + (x))	/* �f�o�C�XSD (x=0�`127) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_ST_1SHOT(x)	(250000 + (x))	/* �f�o�C�XST (x=0�`4063)(M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_R_1SHOT_EXT(x)	(500000 + (x))	/* �f�o�C�XR ( [M7] x=0�`32767)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_C_1SHOT_BIT(x)	(1000000+(x))	/* �f�o�C�XC(CA/CS)�ւ̃r�b�g�A�N�Z�X(M7 x=2000�`4255)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_D_1SHOT_BIT(x)	(1100000+(x))	/* �f�o�C�XD�ւ̃r�b�g�A�N�Z�X(M7 x=0�`2047)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_SD_1SHOT_BIT(x)	(1200000+(x))	/* �f�o�C�XSD�ւ̃r�b�g�A�N�Z�X(M7 x=0�`1023)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_SW_1SHOT_BIT(x)	(1300000+(x))	/* �f�o�C�XSW�ւ̃r�b�g�A�N�Z�X(M7 x=0�`511)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_R_1SHOT_BIT(x)	(1400000+(x))	/* �f�o�C�XR�ւ̃r�b�g�A�N�Z�X(M7 x=0�`32767)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_ST_1SHOT_BIT(x)	(1500000+(x))	/* �f�o�C�XST(STA/STS)�ւ̃r�b�g�A�N�Z�X(M7 x=2000�`4063)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_T_1SHOT_BIT(x)	(1600000+(x))	/* �f�o�C�XT(TA/TS)�ւ̃r�b�g�A�N�Z�X(M7 x=2000�`4703)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_W_1SHOT_BIT(x)	(1700000+(x))	/* �f�o�C�XW�ւ̃r�b�g�A�N�Z�X(M7 x=0�`8191)	*//* P1X-A395 */

/* PLC�f�o�C�X�ilong�j	*/
#define	M_SSEC_PLLNG_X_1SHOT(x)	(1 + (x))	/* �f�o�C�XX (x=0�`2815�@/ [M7] x=0�`8191)	*/
#define	M_SSEC_PLLNG_Y_1SHOT(x)	(10000 + (x))	/* �f�o�C�XY (x=0�`3583�@/ [M7] x=0�`8191)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_M_1SHOT(x)	(20000 + (x))	/* �f�o�C�XM (x=0�`8191�@/ [M7] x=0�`10239)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_F_1SHOT(x)	(40000 + (x))	/* �f�o�C�XF (x=0�`255�@  / [M7] x=0�`1024)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_L_1SHOT(x)	(50000 + (x))	/* �f�o�C�XL (x=0�`255 �@ / [M7] x=0�`511)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_SM_1SHOT(x)	(60000 + (x))	/* �f�o�C�XSM (x=0�`127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_T_1SHOT(x)	(70000 + (x))	/* �f�o�C�XT (x=0�`4255  / [M7] x=0�`4703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_C_1SHOT(x)	(80000 + (x))	/* �f�o�C�XC (x=0�`4127  / [M7] x=0�`4255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_D_1SHOT(x)	(90000 + (x))	/* �f�o�C�XD (x=0�`1023  / [M7] x=0�`2047)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_R_1SHOT(x)	(100000 + (x))	/* �f�o�C�XR (x=0�`8191  / [M7] x=0�`13311)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_E_1SHOT(x)	(120000 + (x))	/* �f�o�C�XE (x=0�`127)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_U_1SHOT(x)	(130000 + (x))	/* �f�o�C�XU (x=0�`383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_W_1SHOT(x)	(140000 + (x))	/* �f�o�C�XW (x=0�`511   /[M7] x=0�`8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_B_1SHOT(x)	(150000 + (x))	/* �f�o�C�XB (x=0�`4103  /[M7] x=0�`8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_G_1SHOT(x)	(160000 + (x))	/* �f�o�C�XG (x=0�`3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_I_1SHOT(x)	(170000 + (x))	/* �f�o�C�XI (x=0�`1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_J_1SHOT(x)	(180000 + (x))	/* �f�o�C�XJ (x=0�`1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_Q_1SHOT(x)	(190000 + (x))	/* �f�o�C�XQ (x=0�`4151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_S_1SHOT(x)	(200000 + (x))	/* �f�o�C�XS (x=0�`319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_SB_1SHOT(x)	(210000 + (x))	/* �f�o�C�XSB (x=0�`511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_V_1SHOT(x)	(220000 + (x))	/* �f�o�C�XV   (x=0�`255) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_SW_1SHOT(x)	(230000 + (x))	/* �f�o�C�XSW (x=0�`511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_SD_1SHOT(x)	(240000 + (x))	/* �f�o�C�XSD (x=0�`127) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_ST_1SHOT(x)	(250000 + (x))	/* �f�o�C�XST (x=0�`4063)(M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_R_1SHOT_EXT(x)	(500000 + (x))	/* �f�o�C�XR ( [M7] x=0�`32767)	*//* P1X-A395 */

/* PLC�f�o�C�X(double)	*/

/* PLC�����o��	*/
#define	M_SSEC_PLFOUT_BIT_C(x)	(1 + (x))	/* �f�o�C�XC(bit) (x=0�`4127  / [M7] x=0�`4255)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_E(x)	(10000 + (x))	/* �f�o�C�XE(bit) (x=0�`127)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_F(x)	(20000 + (x))	/* �f�o�C�XF(bit) (x=0�`255�@  / [M7] x=0�`1024)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_L(x)	(30000 + (x))	/* �f�o�C�XL(bit) (x=0�`255 �@ / [M7] x=0�`511)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_M(x)	(40000 + (x))	/* �f�o�C�XM(bit) (x=0�`8191  / [M7] x=0�`10239)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_T(x)	(60000 + (x))	/* �f�o�C�XT(bit) (x=0�`4255  / [M7] x=0�`4703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_X(x)	(70000 + (x))	/* �f�o�C�XX(bit) (x=0�`0xAFF/ [M7] x=0�`0x1FFF)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_Y(x)	(80000 + (x))	/* �f�o�C�XY(bit) (x=0�`0xDFF/ [M7] x=0�`0x1FFF)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_U(x)	(90000 + (x))	/* �f�o�C�XU(bit) (x=0�`383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_W(x)	(100000 + (x))	/* �f�o�C�XW(bit) (x=0�`511)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_B(x)	(110000 + (x))	/* �f�o�C�XB(bit) (x=0�`4103  /[M7] x=0�`0x1FFF) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_G(x)	(120000 + (x))	/* �f�o�C�XG(bit) (x=0�`3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_I(x)	(130000 + (x))	/* �f�o�C�XI(bit) (x=0�`1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_J(x)	(140000 + (x))	/* �f�o�C�XJ(bit) (x=0�`1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_Q(x)	(150000 + (x))	/* �f�o�C�XQ(bit) (x=0�`4151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_S(x)	(160000 + (x))	/* �f�o�C�XS(bit) (x=0�`319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_SM(x)	(170000 + (x))	/* �f�o�C�XSM(bit) (x=0�`127)(GPPW)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_SB(x)	(180000 + (x))	/* �f�o�C�XSB(bit) (x=0�`0x1FF) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_V(x)	(190000 + (x))	/* �f�o�C�XV(bit)   (x=0�`255) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_ST(x)	(200000 + (x))	/* �f�o�C�XST(bit) (x=0�`4063�j (M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_D(x)	(300000 + (x))	/* �f�o�C�XD(word) (x=0�`1023  / [M7] x=0�`2047)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_R(x)	(310000 + (x))	/* �f�o�C�XR(word) (x=0�`8191  / [M7] x=0�`13311)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_SW(x)	(330000 + (x))	/* �f�o�C�XSW(word) (x=0�`0x1FF ) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_SD(x)	(340000 + (x))	/* �f�o�C�XSD(word) (x=0�`127     ) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_W(x)	(350000 + (x))	/* �f�o�C�XW  (word) (x=0�`0x1FFF) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_CANCEL	500000	/* �f�o�C�X���[�_���o�̓L�����Z��	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_FOUT(x)	(500001 + (x))	/* �f�o�C�X���[�_���o�� (x=1�`4)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_FOUT2(x)	(500101 + (x))	/* �f�o�C�X���[�_���o��2(T, C��2����, ST��3�����Ή��j (x=1�`4)	*//* P1X-A006 P1X-A030 */
#define	M_SSEC_PLFOUT_1SHOT2	500201	/* �f�o�C�X�����V���b�g�o��	*//* P1X-A006 P1X-A030 */
#define	M_SSEC_PLFOUT_X_NOS	600000	/* �f�o�C�XX�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_Y_NOS	600001	/* �f�o�C�XY�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_M_NOS	600002	/* �f�o�C�XM�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_F_NOS	600003	/* �f�o�C�XF�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_L_NOS	600004	/* �f�o�C�XL�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SM_NOS	600005	/* �f�o�C�XSM�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_T_NOS	600006	/* �f�o�C�XT�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_C_NOS	600007	/* �f�o�C�XC�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_V_NOS	600008	/* �f�o�C�XV�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_D_NOS	600009	/* �f�o�C�XD�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_R_NOS	600010	/* �f�o�C�XR�̓_�� (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SB_NOS	600011	/* �f�o�C�XSB�̓_�� (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_B_NOS	600012	/* �f�o�C�XB�̓_�� (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SW_NOS	600013	/* �f�o�C�XSW�̓_�� (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SD_NOS	600014	/* �f�o�C�XSD�̓_�� (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_W_NOS	600015	/* �f�o�C�XW�̓_�� (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_ST_NOS	600016	/* �f�o�C�XST�̓_��(M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_R_EXT(x)	(1000000+(x))	/* �f�o�C�XR(word) ( [M7] x=0�`32767)	*//* P1X-A395 */

/* �T�[�{���j�^	*/
#define	M_SSEC_MSV_GAIN	1	/* �Q�C��	*/
#define	M_SSEC_MSV_DROOP	2	/* �h���[�v	*/
#define	M_SSEC_MSV_REV_SPD	3	/* ��]���x	*/
#define	M_SSEC_MSV_CURRENT	4	/* ���דd��(%)	*/
#define	M_SSEC_MSV_MAX_CUR1	5	/* MAX�d��1	*/
#define	M_SSEC_MSV_MAX_CUR2	6	/* MAX�d��2	*/
#define	M_SSEC_MSV_OVER_LOAD	7	/* �ߕ���	*/
#define	M_SSEC_MSV_OVER_REG	8	/* �񐶕���	*/
#define	M_SSEC_MSV_AMP_DISP	9	/* �A���v�\��	*/
#define	M_SSEC_MSV_ALARM1	10	/* �A���[��1	*/
#define	M_SSEC_MSV_ALARM2	11	/* �A���[��2	*/
#define	M_SSEC_MSV_ALARM3	12	/* �A���[��3	*/
#define	M_SSEC_MSV_ALARM4	13	/* �A���[��4	*/
#define	M_SSEC_MSV_CYC_CNT	14	/* �T�C�N���J�E���^	*/
#define	M_SSEC_MSV_GRDSP	15	/* �O���b�h�Ԋu	*/
#define	M_SSEC_MSV_GRID	16	/* �O���b�h��	*/
#define	M_SSEC_MSV_MAC_POS	17	/* �@�B�ʒu	*/
#define	M_SSEC_MSV_MOT_POS	18	/* ���[�^�[FB	*/
#define	M_SSEC_MSV_SCA_POS	19	/* �@�B�[FB	*/
#define	M_SSEC_MSV_FB_ERROR	20	/* FB�덷	*/
#define	M_SSEC_MSV_DFB_COMP	21	/* DFB�␳��	*/
#define	M_SSEC_MSV_DISTANCE	22	/* �c�w��	*/
#define	M_SSEC_MSV_POSITION2	23	/* ���ݒl(2)	*/
#define	M_SSEC_MSV_MANUAL_IT	24	/* �蓮�����ݗ�	*/
#define	M_SSEC_MSV_ABS_SYS	25	/* ���o�V�X�e��	*/
#define	M_SSEC_MSV_ABS_PON_POS	26	/* �p���[�I���ʒu	*/
#define	M_SSEC_MSV_ABS_POF_POS	27	/* �p���[�I�t�ʒu	*/
#define	M_SSEC_MSV_ABS_MAC_POS	28	/* ���݈ʒu	*/
#define	M_SSEC_MSV_R0	29	/* R0(��_�Z�b�g���̑���]�J�E���^)	*/
#define	M_SSEC_MSV_P0	30	/* P0(��_�Z�b�g����1��]���ʒu)	*/
#define	M_SSEC_MSV_E0	31	/* E0(��_�Z�b�g���̐�Έʒu�덷)	*/
#define	M_SSEC_MSV_RN	32	/* Rn(����]�J�E���^)	*/
#define	M_SSEC_MSV_PN	33	/* Pn(1��]���ʒu)	*/
#define	M_SSEC_MSV_EN	34	/* En(�d���I�t���̐�Έʒu�덷)	*/
#define	M_SSEC_MSV_ABS0	35	/* ABS0(��Έʒu��J�E���^)	*/
#define	M_SSEC_MSV_ABSN	36	/* ABSn(��Έʒu�J�E���^)	*/
#define	M_SSEC_MSV_MPOS	37	/* MPOS(�����I�t�Z�b�g��)	*/
#define	M_SSEC_MSV_UNIT_TYP	38	/* �A���v�^��	*/
#define	M_SSEC_MSV_UNIT_NO	39	/* �A���v����	*/
#define	M_SSEC_MSV_SW_VER	40	/* S/W�o�[�W����	*/
#define	M_SSEC_MSV_CNTROL	41	/* �������	*/
#define	M_SSEC_MSV_MOT_DT	42	/* ���[�^�[���o��	*/
#define	M_SSEC_MSV_MAC_DT	43	/* �@�B�[���o��	*/
#define	M_SSEC_MSV_MOTOR	44	/* ���[�^�^��	*/
#define	M_SSEC_MSV_WORK_TIME	45	/* �ғ�����	*/
#define	M_SSEC_MSV_ALM_HIST_TM1	46	/* �A���[������1(����)	*/
#define	M_SSEC_MSV_ALM_HIST_TM2	47	/* �A���[������2(����)	*/
#define	M_SSEC_MSV_ALM_HIST_TM3	48	/* �A���[������3(����)	*/
#define	M_SSEC_MSV_ALM_HIST_TM4	49	/* �A���[������4(����)	*/
#define	M_SSEC_MSV_ALM_HIST_TM5	50	/* �A���[������5(����)	*/
#define	M_SSEC_MSV_ALM_HIST_TM6	51	/* �A���[������6(����)	*/
#define	M_SSEC_MSV_ALM_HIST_TM7	52	/* �A���[������7(����)	*/
#define	M_SSEC_MSV_ALM_HIST_TM8	53	/* �A���[������8(����)	*/
#define	M_SSEC_MSV_ALM_HIST_NO1	54	/* �A���[������1(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_ALM_HIST_NO2	55	/* �A���[������2(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_ALM_HIST_NO3	56	/* �A���[������3(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_ALM_HIST_NO4	57	/* �A���[������4(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_ALM_HIST_NO5	58	/* �A���[������5(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_ALM_HIST_NO6	59	/* �A���[������6(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_ALM_HIST_NO7	60	/* �A���[������7(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_ALM_HIST_NO8	61	/* �A���[������8(�A���[���ԍ�)	*/
#define	M_SSEC_MSV_MNT1	62	/* �ێ痚��(MNT1)	*/
#define	M_SSEC_MSV_MNT2	63	/* �ێ痚��(MNT2)	*/
#define	M_SSEC_MSV_MNT3	64	/* �ێ痚��(MNT3)	*/
#define	M_SSEC_MSV_MNT4	65	/* �ێ痚��(MNT4)	*/
#define	M_SSEC_MSV_SYS	66	/* /SYS	*/
#define	M_SSEC_MSV_ABS_POS	67	/* ��Έʒu�i�A���v�o�́j	*//* P1X-A127 */
#define	M_SSEC_MSV_MACECOMP	68	/* �@�B�덷�␳�ʁi�A���v�o�́j	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD1L	69	/* �������1L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD1H	70	/* �������1H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD2L	71	/* �������2L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD2H	72	/* �������2H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD3L	73	/* �������3L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD3H	74	/* �������3H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD4L	75	/* �������4L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD4H	76	/* �������4H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD5L	77	/* �������5L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD5H	78	/* �������5H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD6L	79	/* �������6L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD6H	80	/* �������6H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS1L	81	/* ����o��1L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS1H	82	/* ����o��1H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS2L	83	/* ����o��2L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS2H	84	/* ����o��2H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS3L	85	/* ����o��3L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS3H	86	/* ����o��3H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS4L	87	/* ����o��4L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS4H	88	/* ����o��4H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS5L	89	/* ����o��5L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS5H	90	/* ����o��5H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS6L	91	/* ����o��6L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS6H	92	/* ����o��6H	*//* P1X-A127 */
#define	M_SSEC_MSV_ALM_CLR	100	/* �A���[�������N���A	*//* P0Y-A013E */
#define	M_SSEC_MSV_FEED	200	/* ���葬�x	*//* P1X-A006t */
#define	M_SSEC_MSV_MAX_CUR3	201	/* MAX�d��3	*//* P1X-A006t */
#define	M_SSEC_MSV_EST_DTORQ	202	/* ����O���g���N	*//* P1X-A006t */
#define	M_SSEC_MSV_MAX_DTORQ	203	/* MAX�O���g���N	*//* P1X-A006t */
#define	M_SSEC_MSV_LOAD_INER	204	/* ���׃C�i�[�V����	*//* P1X-A006t */
#define	M_SSEC_MSV_AFLT_FREQ	205	/* AFLT���g��	*//* P1X-A006t */
#define	M_SSEC_MSV_AFLT_GAIN	206	/* AFLT�Q�C��	*//* P1X-A006t */
#define	M_SSEC_MSV_MOT_DT_NO	207	/* ���[�^�[���o�퐻��	*//* P1X-A006t */
#define	M_SSEC_MSV_MAC_DT_NO	208	/* �@�B�[���o�퐻��	*//* P1X-A006t */
#define	M_SSEC_MSV_STL_CNV_NUM	209	/* �X�g�[����i���Z�萔	*//* P1X-A145A */
#define	M_SSEC_MSV_SCA_POS2	210	/* �@�B�[FB(��]���ۂ�)	*//* P1X-A308A */
#define	M_SSEC_MSV_AUX_CUR_STN	500	/* �⏕�� ���݃X�e�[�V�����ԍ�	*//* P1X-A299 */
#define	M_SSEC_MSV_AUX_MAC_POS	501	/* �⏕�� ���݈ʒu	*//* P1X-A299 */
#define	M_SSEC_MSV_AUX_INST_STN	502	/* �⏕�� �ڕW�X�e�[�V�����ԍ�	*//* P1X-A299 */
#define	M_SSEC_MSV_AUX_INST_POS	503	/* �⏕�� �w�߈ʒu	*//* P1X-A299 */
#define	M_SSEC_MSV_ALM_NO(x)	(1000 + (x))	/* �A���[���ԍ�(x=1�`32)	*//* P1X-A006t */
#define	M_SSEC_MSV_ALM_TIMES(x)	(1100 + (x))	/* �A���[����(x=1�`32)	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_ADDRESS1	1200	/* DA�A�h���X1	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_OUTPUT1	1201	/* DA�o��1	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_ADDRESS2	1202	/* DA�A�h���X2	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_OUTPUT2	1203	/* DA�o��2	*//* P1X-A006t */
#define	M_SSEC_MSV_ALM_TIMES_CLR	1300	/* �S�A���[���񐔃N���A	*//* P1X-A006t */
#define	M_SSEC_MSV_FCTCNT_CLR	2000	/* �T�[�{���A���[���v���J�E���^�N���A	*//* P1X-A497 */
#define	M_SSEC_MSV_ALM_SUM(x)	(2100+(x))	/* �T�[�{���A���[��NO(x)�ݐσJ�E���^ (x=0x00�`0xFF)	*//* P1X-A497 */
#define	M_SSEC_MSV_ALM_INC(x)	(2400+(x))	/* �T�[�{���A���[��NO(x)�p�x�J�E���^ (x=0x00�`0xFF)	*//* P1X-A497 */

/* �T�[�{���j�^�i�厲�^�T�[�{�j	*/

/* �����덷���j�^	*/
#define	M_SSEC_MSERR_DOK1_SGOSA	1	/* �w�ߌ덷(1�g��)	*/
#define	M_SSEC_MSERR_DOK2_SGOSA	2	/* �w�ߌ덷(2�g��)	*/
#define	M_SSEC_MSERR_DOK3_SGOSA	3	/* �w�ߌ덷(3�g��)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_FBGOSA	11	/* FB�덷(1�g��)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_FBGOSA	12	/* FB�덷(2�g��)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_FBGOSA	13	/* FB�덷(3�g��)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_MACHIN	21	/* �@�B�ʒu(1�g��)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_MACHIN	22	/* �@�B�ʒu(2�g��)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_MACHIN	23	/* �@�B�ʒu(3�g��)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_SLVNO	31	/* �X���[�u���ԍ��i1�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_SLVNO	32	/* �X���[�u���ԍ��i2�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_SLVNO	33	/* �X���[�u���ԍ��i3�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_FBMAX1	41	/* FB�덷 MAX1�i1�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_FBMAX1	42	/* FB�덷 MAX1�i2�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_FBMAX1	43	/* FB�덷 MAX1�i3�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_FBMAX2	51	/* FB�덷 MAX2�i1�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_FBMAX2	52	/* FB�덷 MAX2�i2�g�ځj	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_FBMAX2	53	/* FB�덷 MAX2�i3�g�ځj	*//* P1X-A106 */

/* �厲���j�^	*/
#define	M_SSEC_MSP_GAIN	1	/* �Q�C��	*/
#define	M_SSEC_MSP_DROOP	2	/* �h���[�v	*/
#define	M_SSEC_MSP_REV_SPD	3	/* ��]���x	*/
#define	M_SSEC_MSP_LOAD	4	/* ���[�h	*/
#define	M_SSEC_MSP_AMP_DISP	5	/* �A���v�\��	*/
#define	M_SSEC_MSP_ALARM1	6	/* �A���[��1	*/
#define	M_SSEC_MSP_ALARM2	7	/* �A���[��2	*/
#define	M_SSEC_MSP_ALARM3	8	/* �A���[��3	*/
#define	M_SSEC_MSP_ALARM4	9	/* �A���[��4	*/
#define	M_SSEC_MSP_CYC_CNT	10	/* �T�C�N���J�E���^	*/
#define	M_SSEC_MSP_CMD1L	11	/* �������1L	*/
#define	M_SSEC_MSP_CMD1H	12	/* �������1H	*/
#define	M_SSEC_MSP_CMD2L	13	/* �������2L	*/
#define	M_SSEC_MSP_CMD2H	14	/* �������2H	*/
#define	M_SSEC_MSP_CMD3L	15	/* �������3L	*/
#define	M_SSEC_MSP_CMD3H	16	/* �������3H	*/
#define	M_SSEC_MSP_CMD4L	17	/* �������4L	*/
#define	M_SSEC_MSP_CMD4H	18	/* �������4H	*/
#define	M_SSEC_MSP_STS1L	19	/* ����o��1L	*/
#define	M_SSEC_MSP_STS1H	20	/* ����o��1H	*/
#define	M_SSEC_MSP_STS2L	21	/* ����o��2L	*/
#define	M_SSEC_MSP_STS2H	22	/* ����o��2H	*/
#define	M_SSEC_MSP_STS3L	23	/* ����o��3L	*/
#define	M_SSEC_MSP_STS3H	24	/* ����o��3H	*/
#define	M_SSEC_MSP_STS4L	25	/* ����o��4L	*/
#define	M_SSEC_MSP_STS4H	26	/* ����o��4H	*/
#define	M_SSEC_MSP_UNIT_TYP	27	/* �A���v�^��	*/
#define	M_SSEC_MSP_UNIT_NO	28	/* �A���v����	*/
#define	M_SSEC_MSP_SW_VER	29	/* S/W�o�[�W����	*/
#define	M_SSEC_MSP_WORK_TIME	30	/* �ғ�����	*/
#define	M_SSEC_MSP_ALM_HIST_TM1	31	/* �A���[������1(����)	*/
#define	M_SSEC_MSP_ALM_HIST_TM2	32	/* �A���[������2(����)	*/
#define	M_SSEC_MSP_ALM_HIST_TM3	33	/* �A���[������3(����)	*/
#define	M_SSEC_MSP_ALM_HIST_TM4	34	/* �A���[������4(����)	*/
#define	M_SSEC_MSP_ALM_HIST_TM5	35	/* �A���[������5(����)	*/
#define	M_SSEC_MSP_ALM_HIST_TM6	36	/* �A���[������6(����)	*/
#define	M_SSEC_MSP_ALM_HIST_TM7	37	/* �A���[������7(����)	*/
#define	M_SSEC_MSP_ALM_HIST_TM8	38	/* �A���[������8(����)	*/
#define	M_SSEC_MSP_ALM_HIST_NO1	39	/* �A���[������1(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_ALM_HIST_NO2	40	/* �A���[������2(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_ALM_HIST_NO3	41	/* �A���[������3(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_ALM_HIST_NO4	42	/* �A���[������4(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_ALM_HIST_NO5	43	/* �A���[������5(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_ALM_HIST_NO6	44	/* �A���[������6(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_ALM_HIST_NO7	45	/* �A���[������7(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_ALM_HIST_NO8	46	/* �A���[������8(�A���[���ԍ�)	*/
#define	M_SSEC_MSP_MNT1	47	/* �ێ痚��(MNT1)	*/
#define	M_SSEC_MSP_MNT2	48	/* �ێ痚��(MNT2)	*/
#define	M_SSEC_MSP_MNT3	49	/* �ێ痚��(MNT3)	*/
#define	M_SSEC_MSP_MNT4	50	/* �ێ痚��(MNT4)	*/
#define	M_SSEC_MSP_SYS	51	/* /SYS	*/
#define	M_SSEC_MSP_CMD1	52	/* �������1	*//* P0Y-A013E */
#define	M_SSEC_MSP_CMD2	53	/* �������2	*//* P0Y-A013E */
#define	M_SSEC_MSP_CMD3	54	/* �������3	*//* P0Y-A013E */
#define	M_SSEC_MSP_CMD4	55	/* �������4	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS1	56	/* ����o��1	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS2	57	/* ����o��2	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS3	58	/* ����o��3	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS4	59	/* ����o��4	*//* P0Y-A013E */
#define	M_SSEC_MSP_SPNDL_ANGL	60	/* �厲�p�x	*//* P1X-A020 */
#define	M_SSEC_MSP_CMD5L	61	/* �������5L	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD5H	62	/* �������5H	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD6L	63	/* �������6L	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD6H	64	/* �������6H	*//* P1X-A091A */
#define	M_SSEC_MSP_STS5L	65	/* ����o��5L	*//* P1X-A091A */
#define	M_SSEC_MSP_STS5H	66	/* ����o��5H	*//* P1X-A091A */
#define	M_SSEC_MSP_STS6L	67	/* ����o��6L	*//* P1X-A091A */
#define	M_SSEC_MSP_STS6H	68	/* ����o��6H	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD5	69	/* �������5	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD6	70	/* �������6	*//* P1X-A091A */
#define	M_SSEC_MSP_STS5	71	/* ����o��5	*//* P1X-A091A */
#define	M_SSEC_MSP_STS6	72	/* ����o��6	*//* P1X-A091A */
#define	M_SSEC_MSP_ALM_CLR	100	/* �A���[�������N���A	*//* P0Y-A013E */
#define	M_SSEC_MSP_FEED	200	/* ���葬�x	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_CUR1	201	/* MAX�d��1	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_CUR2	202	/* MAX�d��2	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_CUR3	203	/* MAX�d��3	*//* P1X-A006t */
#define	M_SSEC_MSP_OVER_LOAD	204	/* �ߕ���	*//* P1X-A006t */
#define	M_SSEC_MSP_OVER_REG	205	/* �񐶕���	*//* P1X-A006t */
#define	M_SSEC_MSP_EST_DTORQ	206	/* ����O���g���N	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_DTORQ	207	/* MAX�O���g���N	*//* P1X-A006t */
#define	M_SSEC_MSP_LOAD_INER	208	/* ���׃C�i�[�V����	*//* P1X-A006t */
#define	M_SSEC_MSP_AFLT_FREQ	209	/* AFLT���g��	*//* P1X-A006t */
#define	M_SSEC_MSP_AFLT_GAIN	210	/* AFLT�Q�C��	*//* P1X-A006t */
#define	M_SSEC_MSP_GRDSP	211	/* �O���b�h�Ԋu	*//* P1X-A006t */
#define	M_SSEC_MSP_GRID	212	/* �O���b�h��	*//* P1X-A006t */
#define	M_SSEC_MSP_MAC_POS	213	/* �@�B�ʒu	*//* P1X-A006t */
#define	M_SSEC_MSP_MOT_POS	214	/* ���[�^�[FB	*//* P1X-A006t */
#define	M_SSEC_MSP_FB_ERROR	215	/* FB�덷	*//* P1X-A006t */
#define	M_SSEC_MSP_DFB_COMP	216	/* DFB�␳��	*//* P1X-A006t */
#define	M_SSEC_MSP_MOT_DT_NO	217	/* ���[�^�[���o�퐻��	*//* P1X-A006t */
#define	M_SSEC_MSP_MAC_DT_NO	218	/* �@�B�[���o�퐻��	*//* P1X-A006t */
#define	M_SSEC_MSP_TAPERR_WIDE	219	/* �����^�b�v�덷��(�ő�l) 	*//* P1X-A184A */
#define	M_SSEC_MSP_TAPERR_ANGLE	220	/* �����^�b�v�덷�p�x(�ő�l) 	*//* P1X-A184A */
#define	M_SSEC_MSP_SP_TEMPERATURE	221	/* �厲�T�[�~�X�^���x	*//* P1X-A300 */
#define	M_SSEC_MSP_ALM_NO(x)	(1000 + (x))	/* �A���[���ԍ�(x=1�`32)	*//* P1X-A006t */
#define	M_SSEC_MSP_ALM_TIMES(x)	(1100 + (x))	/* �A���[����(x=1�`32)	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_ADDRESS1	1200	/* DA�A�h���X1	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_OUTPUT1	1201	/* DA�o��1	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_ADDRESS2	1202	/* DA�A�h���X2	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_OUTPUT2	1203	/* DA�o��2	*//* P1X-A006t */
#define	M_SSEC_MSP_ALM_TIMES_CLR	1300	/* �S�A���[���񐔃N���A	*//* P1X-A006t */
#define	M_SSEC_MSP_ENC_DIAG_L	1400	/* ���[�^�[PLG�f�fL	*//* P1X-A476 */
#define	M_SSEC_MSP_ENC_DIAG_H	1401	/* ���[�^�[PLG�f�fH	*//* P1X-A476 */
#define	M_SSEC_MSP_SUB_ENC_DIAG_L	1402	/* �@�B�[PLG�f�fL	*//* P1X-A476 */
#define	M_SSEC_MSP_SUB_ENC_DIAG_H	1403	/* �@�B�[PLG�f�fH	*//* P1X-A476 */
#define	M_SSEC_MSP_FCTCNT_CLR	2000	/* �厲�A���[���v���J�E���^�N���A	*//* P1X-A497 */
#define	M_SSEC_MSP_ALM_SUM(x)	(2100+(x))	/* �厲�A���[��NO(x)�ݐσJ�E���^ (x=0x00�`0xFF)	*//* P1X-A497 */
#define	M_SSEC_MSP_ALM_INC(x)	(2400+(x))	/* �厲�A���[��NO(x)�p�x�J�E���^ (x=0x00�`0xFF)	*//* P1X-A497 */

/* �p���[�T�v���C���j�^	*/
#define	M_SSEC_MPWS_UNIT_TYP	1	/* ���j�b�g�^��	*/
#define	M_SSEC_MPWS_UNIT_NO	2	/* ���j�b�g�ԍ�	*/
#define	M_SSEC_MPWS_SW_VER	3	/* S/W�o�[�W����	*/
#define	M_SSEC_MPWS_WORK_TIME	4	/* �ғ�����	*/
#define	M_SSEC_MPWS_ALM_HIST_TM1	5	/* �A���[������1(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM2	6	/* �A���[������2(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM3	7	/* �A���[������3(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM4	8	/* �A���[������4(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM5	9	/* �A���[������5(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM6	10	/* �A���[������6(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM7	11	/* �A���[������7(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM8	12	/* �A���[������8(����)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO1	13	/* �A���[������1(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO2	14	/* �A���[������2(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO3	15	/* �A���[������3(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO4	16	/* �A���[������4(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO5	17	/* �A���[������5(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO6	18	/* �A���[������6(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO7	19	/* �A���[������7(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO8	20	/* �A���[������8(�A���[���ԍ�)	*/
#define	M_SSEC_MPWS_MNT1	21	/* �ێ痚��(MNT1)	*/
#define	M_SSEC_MPWS_MNT2	22	/* �ێ痚��(MNT2)	*/
#define	M_SSEC_MPWS_MNT3	23	/* �ێ痚��(MNT3)	*/
#define	M_SSEC_MPWS_MNT4	24	/* �ێ痚��(MNT4)	*/
#define	M_SSEC_MPWS_SYS	25	/* /SYS	*/
#define	M_SSEC_MPWS_DRIVE	26	/* �ڑ��h���C�u	*//* P0Y-A013E */
#define	M_SSEC_MPWS_REC_ENERGY	27	/* ����G�l���M�[	*//* P1X-A006t */
#define	M_SSEC_MPWS_PWSPLY_VOL	28	/* �d���d��	*//* P1X-A006t */
#define	M_SSEC_MPWS_PNBUS_VOL	29	/* PN����d��	*//* P1X-A006t */
#define	M_SSEC_MPWS_MIN_PNBUS_VOL	30	/* MINPN����d��	*//* P1X-A006t */
#define	M_SSEC_MPWS_MIN_PNBUS_CUR	31	/* MINPN������d��	*//* P1X-A006t */
#define	M_SSEC_MPWS_BUS_CUR	32	/* ����d��	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_CUR1	33	/* MAX�͍s�d���P	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_CUR2	34	/* MAX�͍s�d���Q	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_RGN_CUR1	35	/* MAX�񐶓d���P	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_RGN_CUR2	36	/* MAX�񐶓d���Q	*//* P1X-A006t */
#define	M_SSEC_MPWS_INSTANT_STOP	37	/* �u���	*//* P1X-A006t */
#define	M_SSEC_MPWS_ALM_CLR	100	/* �A���[�������N���A	*//* P0Y-A013E */

/* �⏕���A���v���j�^	*/
#define	M_SSEC_MAUX_DROOP	1	/* �h���[�v	*/
#define	M_SSEC_MAUX_REV_SPD	2	/* ��]���x	*/
#define	M_SSEC_MAUX_CURRENT	3	/* ���דd��	*/
#define	M_SSEC_MAUX_MAX_CUR1	4	/* MAX�d��1	*/
#define	M_SSEC_MAUX_MAX_CUR2	5	/* MAX�d��2	*/
#define	M_SSEC_MAUX_OVER_LOAD	6	/* �ߕ���	*/
#define	M_SSEC_MAUX_OVER_REG	7	/* �񐶕���	*/
#define	M_SSEC_MAUX_CUR_STN	8	/* ���݃X�e�[�V�����ԍ�	*/
#define	M_SSEC_MAUX_MAC_POS	9	/* ���݈ʒu	*/
#define	M_SSEC_MAUX_INST_STN	10	/* �ڕW�X�e�[�V�����ԍ�	*/
#define	M_SSEC_MAUX_INST_POS	11	/* �w�߈ʒu	*/
#define	M_SSEC_MAUX_AUX_NAME	12	/* �⏕������	*/
#define	M_SSEC_MAUX_POS_CON_GAIN1	13	/* �ʒu����Q�C��1	*/
#define	M_SSEC_MAUX_SPEED_CON_GAIN1	14	/* ���x����Q�C��1	*/
#define	M_SSEC_MAUX_POS_CON_GAIN2	15	/* �ʒu����Q�C��2	*/
#define	M_SSEC_MAUX_SPEED_CON_GAIN2	16	/* ���x����Q�C��2	*/
#define	M_SSEC_MAUX_SPEED_INT_COMP	17	/* ���x�ϕ��⏞	*/
#define	M_SSEC_MAUX_LOAD_INERTIA	18	/* ���׃C�i�[�V����	*/
#define	M_SSEC_MAUX_UNIT_TYP	19	/* ���j�b�g�^��	*/
#define	M_SSEC_MAUX_SW_VER	20	/* S/W�o�[�W����	*/
#define	M_SSEC_MAUX_MOTOR	21	/* ���[�^�^��	*/
#define	M_SSEC_MAUX_ALARM1	22	/* �A���[��1	*/
#define	M_SSEC_MAUX_ALARM2	23	/* �A���[��2	*/
#define	M_SSEC_MAUX_ALARM3	24	/* �A���[��3	*/
#define	M_SSEC_MAUX_ALARM4	25	/* �A���[��4	*/
#define	M_SSEC_MAUX_UNIT_NO	26	/* ���j�b�g����	*//* P1X-A087 */
#define	M_SSEC_MAUX_ALM_HIST_NO(x)	(30 + (x))	/* �A���[������1�`6(�A���[���ԍ�) (x=1�`6)	*/
#define	M_SSEC_MAUX_ALM_HIST_INF(x)	(50 + (x))	/* �A���[������1�`6(�A���[���ڍ׏��)(x=1�`6)	*/
#define	M_SSEC_MAUX_ALM_HIST(x)	(70 + (x))	/* �A���[������1�`6(x=1�`6)	*//* P0Y-A013E */

/* H/W�\��	*/
#define	M_SSEC_HWCFG_RIO_UNIT(x)	(x)	/* RIO���j�b�g1�`8	*/
#define	M_SSEC_HWCFG_TERMINAL_RIO(x)	(100 + (x))	/* �^�[�~�i��RIO���j�b�g1�`4	*/
#define	M_SSEC_HWCFG_MAIN_UNIT	200	/* ���䃆�j�b�g(NC�J�[�h)	*//* P0Y-A013B */
#define	M_SSEC_HWCFG_EXT_UNIT	201	/* �g�����j�b�g	*//* P0Y-A013B */
#define	M_SSEC_HWCFG_TERMINAL	300	/* �^�[�~�i���\����iM7�p�j	*//* P1X-A020B */
#define	M_SSEC_HWCFG_OPT_CARD	301	/* �I�v�V�����J�[�h�p�g���o�X(OPTION CARD)   �iM7�p�j	*//* P1X-A020B */
#define	M_SSEC_HWCFG_ATT_CARD	302	/* CPUCARD�p �O��I/F  �iMagic68�p�j	*//* P1X-A020B */
#define	M_SSEC_HWCFG_OPE_CARD	303	/* ����Օ����J�[�h  �iM7�p�j	*//* P1X-A120B */
#define	M_SSEC_HWCFG_RIO_NOS	400	/* RIO���j�b�g���iM7�p�j	*//* P1X-A020B */
#define	M_SSEC_HWCFG_RIO_ALL(x)	(400 + (x))	/* RIO���j�b�g�iM7�p�j(x=1�`32)	*//* P1X-A020B */
#define	M_SSEC_HWCFG_CNC_UNITS(x)	(500 + (x))	/* ���䃆�j�b�g1�`4(M7)(x=1�`4)	*//* P1X-A006n */
#define	M_SSEC_HWCFG_EXT_UNITS(x)	(550 + (x))	/* �g�����j�b�g1�`4(M7)(x=1�`4)	*//* P1X-A006n */
#define	M_SSEC_HWCFG_CNC_UNITS_VER(x)	(600 + (x))	/* ���䃆�j�b�gHW�o�[�W����1�`4(x=1�`4)	*//* P1X-A006n */
#define	M_SSEC_HWCFG_RAS_BATTERY_VOLT	1000	/* �o�b�e���d��	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_BATTERY_STS	1001	/* �o�b�e���[�d�����	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_BATTERY_USED	1002	/* �o�b�e���[�o�ߔN��	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_MAIN_UNIT_TEMP	1010	/* ���䃆�j�b�g���x	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_MAIN_UNIT_FAN_REV	1011	/* ���䃆�j�b�g�t�@����]��	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_MAIN_UNIT_TEMP2	1012	/* ���䃆�j�b�g���x2	*//* P1X-A333Q */
#define	M_SSEC_HWCFG_RAS_SV_COMERR_NOS	1020	/* �T�[�{�ʐM�G���[1��	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_SV_COMERR_ACC	1021	/* �T�[�{�ʐM�G���[1�ݐ�	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_RIO_COMERR_NOS	1030	/* RIO�ʐM�G���[��	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_RIO_COMERR_ACC	1031	/* RIO�ʐM�G���[�ݐ�	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_RIO_CHNODE1	1032	/* RIO�`�����l���ԍ�/�ǔԍ�1	*//* P1X-A240A */
#define	M_SSEC_HWCFG_RAS_RIO_CHNODE2	1033	/* RIO�`�����l���ԍ�/�ǔԍ�2	*//* P1X-A240A */
#define	M_SSEC_HWCFG_RAS_ETHER_COMERR_NOS	1040	/* Ethernet�ʐM�G���[��	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_ETHER_COMERR_ACC	1041	/* Ethernet�ʐM�G���[�ݐ�	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_SV_ERR_NOS(x)	(1100 + (x))	/* �T�[�{�ʐM�G���[�񐔁ix=1�`8)	*//* P1X-A008W */
#define	M_SSEC_HWCFG_RAS_SV_ERR_ACC(x)	(1200 + (x))	/* �T�[�{�ʐM�G���[�ݐρix=1�`8)	*//* P1X-A008W */
#define	M_SSEC_HWCFG_CREDIT_STAUTS	2000	/* �N���W�b�g�V�X�e�����	*//* P1X-A181 */
#define	M_SSEC_HWCFG_CREDIT_TIMELIMIT	2001	/* �N���W�b�g�V�X�e���L������	*//* P1X-A181 */
#define	M_SSEC_HWCFG_CCLINK_STATUS	3000	/* CC-Link�������	*//* P1X-A247B */

/* S/W�\��	*/
#define	M_SSEC_SWCFG_NC_VER	1	/* NC�V�X�e���o�[�W����	*/
#define	M_SSEC_SWCFG_PLC_VER	2	/* PLC�o�[�W����	*/
#define	M_SSEC_SWCFG_PLCE_VER	3	/* PLCe�o�[�W����(�g���O���A���[�����b�Z�[�W)	*/
#define	M_SSEC_SWCFG_LANG3_VER	4	/* ��3����o�[�W����	*/
#define	M_SSEC_SWCFG_LANG4_VER	5	/* ��4����o�[�W����	*/
#define	M_SSEC_SWCFG_SVANP_VER	6	/* �T�[�{�A���v�o�[�W����	*/
#define	M_SSEC_SWCFG_SPAMP_VER	7	/* �厲�A���v�o�[�W����	*/
#define	M_SSEC_SWCFG_OS_VER	8	/* OS�o�[�W����	*//* P1X-A006M */
#define	M_SSEC_SWCFG_APLC_VER	9	/* APLC�o�[�W����	*//* P1X-A006M */
#define	M_SSEC_SWCFG_USER1_VER	10	/* USER1�o�[�W����	*//* P1X-A167 */
#define	M_SSEC_SWCFG_EX_BUS_VER(x)	(15+(x))	/* �g���o�X�o�[�W����(x=1�`3)	*//* P1X-A353 */
#define	M_SSEC_SWCFG_NC_EX_VER	20	/* NC�V�X�e���o�[�W����(4���\��)	*//* P0Y-A091A */
#define	M_SSEC_SWCFG_SAFE_VER	25	/* ���S�Ď��@�\�o�[�W����	*//* P1X-A157T */
#define	M_SSEC_SWCFG_HMI_VER	30	/* HMI�o�[�W����	*//* P1X-A180 */
#define	M_SSEC_SWCFG_LANG_VER(x)	(30 + (x))	/* LANGx�o�[�W����(x=1�`23)	*//* P1X-A180 */
#define	M_SSEC_SWCFG_LADFILE_NOS	100	/* ���_�[�t�@�C���o�^��	*//* P1X-A006s */
#define	M_SSEC_SWCFG_LADFILE_NAME(x)	(200 + (x))	/* ���_�[�t�@�C�����ix=1�`32�j	*//* P1X-A006s */
#define	M_SSEC_SWCFG_LADFILE_TITLE(x)	(300 + (x))	/* ���_�[�t�@�C�����o���ix=1�`32�j	*//* P1X-A006s */
#define	M_SSEC_SWCFG_LADFILE_EXEC_TYPE(x)	(400 + (x))	/* ���s�^�C�v�ix=1�`32�j	*//* P1X-A006s */

/* ���S�l�b�gI/F	*/
#define	M_SSEC_ANETIF_CALL	1	/* �����^�b�`�R�[��	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NOTICEOP	2	/* �I�y���[�^�ʒm	*//* P1X-A121 */
#define	M_SSEC_ANETIF_OPTIONALNO	3	/* �C�Ӕԍ�	*//* P1X-A121 */
#define	M_SSEC_ANETIF_CALLSEL	4	/* �ʒm��ԍ��I��	*//* P1X-A121 */
#define	M_SSEC_ANETIF_ANETMSGSTS	101	/* ���S�l�b�g���b�Z�[�W���	*//* P1X-A121 */
#define	M_SSEC_ANETIF_HOSTMSG	102	/* NC�T�[�r�X����̃��b�Z�[�W	*//* P1X-A121 */
#define	M_SSEC_ANETIF_COMMSTS	103	/* ���S�l�b�g �ʐM���	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NET_STS	104	/* ���S�l�b�g �ʐM�X�e�[�^�X	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NET_COMMAND	105	/* ���S�l�b�g/�H�@�l�b�g �ʐM�R�}���h	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NS_COMMODE	106	/* ���S�l�b�g �ʐM���[�h	*//* P1X-A121 */
#define	M_SSEC_ANETIF_ERRNO	107	/* ���S�l�b�g/�H�@�l�b�g �G���[�R�[�h	*//* P1X-A121 */
#define	M_SSEC_ANETIF_CHGSTS	201	/* ��ʑJ�ڏ��	*//* P1X-A121 */
#define	M_SSEC_ANETIF_CHGREST	202	/* ��ʑJ�ڐ������	*//* P1X-A121 */
#define	M_SSEC_ANETIF_DIAG_INFO_SEND	301	/* �H�@�l�b�g �f�f��񑗐M	*//* P1X-A257 */
#define	M_SSEC_ANETIF_WARN_CANCEL	302	/* �H�@�l�b�g �x������	*//* P1X-A257 */
#define	M_SSEC_ANETIF_MESS_RECV	303	/* �H�@�l�b�g ���b�Z�[�W��M 	*//* P1X-A257 */
#define	M_SSEC_ANETIF_KNET_COMMSTS	304	/* �H�@�l�b�g �ʐM���	*//* P1X-A257 */
#define	M_SSEC_ANETIF_KNET_STS	305	/* �H�@�l�b�g �ʐM�X�e�[�^�X	*//* P1X-A257 */
#define	M_SSEC_ANETIF_KNET_NS_COMMODE	306	/* �H�@�l�b�g �ʐM���[�h	*//* P1X-A257 */
#define	M_SSEC_ANETIF_DEV_NAME	401	/* ���H�f�[�^���L����M���s�����u��	*//* P1X-A121F */
#define	M_SSEC_ANETIF_DIR_NAME	402	/* ���H�f�[�^���L����M���s���f�B���N�g����	*//* P1X-A121F */
#define	M_SSEC_ANETIF_FILE_NAME	403	/* ���H�f�[�^���L����M���s���t�@�C����	*//* P1X-A121F */
#define	M_SSEC_ANETIF_FILE_SIZE	404	/* ���H�f�[�^���L����M���s���t�@�C���T�C�Y	*//* P1X-A121F */
#define	M_SSEC_ANETIF_DEV_FREE_SIZE	405	/* ���H�f�[�^���L����M���s�����u�̋󂫗e��	*//* P1X-A121F */
#define	M_SSEC_ANETIF_ANET_FILE_NAME_PUT	406	/* ���H�f�[�^���L���M���s�����S�l�b�g�T�[�o���t�@�C����	*//* P1X-A121F */
#define	M_SSEC_ANETIF_ANET_FILE_NAME_GET	407	/* ���H�f�[�^���L��M���s�����S�l�b�g�T�[�o���t�@�C����	*//* P1X-A121F */
#define	M_SSEC_ANETIF_ANET_FILE_NAME_DEL	408	/* ���H�f�[�^���L�폜���s�����S�l�b�g�T�[�o���t�@�C����	*//* P1X-A121F */
#define	M_SSEC_ANETIF_REQ_STS	409	/* ���S�l�b�g�A�H�@�l�b�g�̋@�\���Ƃ̎��s�v����Ԏ擾	*//* P1X-A121F */

/* ��Έʒu���o�f�[�^	*/
#define	M_SSEC_ABS_DETECT_TYPE	1	/* ��Έʒu���o�^�C�v	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_STATE	2	/* ��Έʒu���o���	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_EG	3	/* �@�B�[	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_MAC	4	/* �@�B�l	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_PASS	5	/* ���ʉ�(�@�B�l�̏��)	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_MESS	6	/* ���������Z�b�g���b�Z�[�W	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_SET	7	/* ��Έʒu�����Z�b�g��	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_REF_POINT	100	/* ��Έʒu��_�ݒ�	*/
#define	M_SSEC_ABS_DETECT_SET_ABS_POS	101	/* ��Έʒu�Z�b�g	*/
#define	M_SSEC_ABS_DETECT_ZERO	102	/* ��Έʒu���_	*//* P0Y-A013E */

/* �⏕������	*/
#define	M_SSEC_AUX_OPETEST_MODE	1	/* �^�]�������[�h	*/
#define	M_SSEC_AUX_ABS_POS_INIT	2	/* ��Έʒu�Z�b�g	*/
#define	M_SSEC_AUX_POS_SET_TYP	3	/* �ʒu�Z�b�g����	*/
#define	M_SSEC_AUX_POS_SET_STS	4	/* �ʒu�Z�b�g���	*/
#define	M_SSEC_AUX_OPE_MODE	5	/* �^�]���[�h	*/
#define	M_SSEC_AUX_PARAM_SET	6	/* ����p�����[�^�Q	*/
#define	M_SSEC_AUX_SCALE	7	/* �{��	*/
#define	M_SSEC_AUX_OPE_STATE	8	/* �^�]���	*/
#define	M_SSEC_AUX_ORIGIN_SET	9	/* �⏕����_�Z�b�g	*/
#define	M_SSEC_AUX_SRAM_BACKUP	1000	/* �⏕���p�����[�^SRAM�o�b�N�A�b�v	*//* P1X-A087 */

/* MELDAS-NET �̏�f�f���	*/

/* �T���v�����O�p�����[�^	*/
#define	M_SSEC_SMP_PRM_TRIGGER	1	/* �T���v�����O�g���K	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_RATE	2	/* �T���v�����O����	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_NOS	3	/* �T���v�����O�f�[�^��	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_BUFF_ADDR	4	/* �T���v�����O�f�[�^�i�[�A�h���X	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_BUFF_SIZE	5	/* �T���v�����O�f�[�^�i�[�T�C�Y	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR1	6	/* �T���v�����O�A�h���X#1(M625�]���݊�)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR2	7	/* �T���v�����O�A�h���X#2(M625�]���݊�)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR3	8	/* �T���v�����O�A�h���X#3(M625�]���݊�)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR4	9	/* �T���v�����O�A�h���X#4(M625�]���݊�)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR5	10	/* �T���v�����O�A�h���X#5(M625�]���݊�)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR6	11	/* �T���v�����O�A�h���X#6(M625�]���݊�)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR7	12	/* �T���v�����O�A�h���X#7(M625�]���݊�)	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR8	13	/* �T���v�����O�A�h���X#8(M625�]���݊�)	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR1	20	/* �T���v�����O�A�h���X#1	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR2	21	/* �T���v�����O�A�h���X#2	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR3	22	/* �T���v�����O�A�h���X#3	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR4	23	/* �T���v�����O�A�h���X#4	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR5	24	/* �T���v�����O�A�h���X#5	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR6	25	/* �T���v�����O�A�h���X#6	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR7	26	/* �T���v�����O�A�h���X#7	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR8	27	/* �T���v�����O�A�h���X#8	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR1	41	/* AT�p�T���v�����O�A�h���X#1	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR2	42	/* AT�p�T���v�����O�A�h���X#2	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR3	43	/* AT�p�T���v�����O�A�h���X#3	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR4	44	/* AT�p�T���v�����O�A�h���X#4	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR5	45	/* AT�p�T���v�����O�A�h���X#5	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR6	46	/* AT�p�T���v�����O�A�h���X#6	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR7	47	/* AT�p�T���v�����O�A�h���X#7	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR8	48	/* AT�p�T���v�����O�A�h���X#8	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_TRGMOD	50	/* �o�b�t�@�w��i0:�����������A�P�F�J�Z�b�g�������j	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_BUFF_CAP	51	/* �o�b�t�@�e�ʁi1024�~�i�ݒ�l+1) byte�j	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_START_COND	52	/* �J�n����	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_PROC_FORM	53	/* �����`�ԁi0:1shot�A�P�Frepeat�A2:�����O�o�b�t�@�j	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_END_COND	54	/* �I������	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_VAR_NUM	55	/* �ϐ��ԍ��i0:#1299�A0�ȊO�F�R�����ϐ��j	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_PLC_DEV	56	/* PLC�f�o�C�X	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_COND_ADDR	57	/* �����A�h���X	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_COND_DATA	58	/* �����f�[�^	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_COND_MASK	59	/* �����f�[�^�}�X�N	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_SAMP_OUT	60	/* �T���v�����O�f�[�^�o�͌`��	*//* P1X-A141 */
#define	M_SSEC_SMP_PRM_SAMP_MAX_DATA	61	/* �ő�T���v�����O�f�[�^��	*//* P1X-A141 */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT1	62	/* �T���v�����O�f�[�^�o�͒P��#1	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT2	63	/* �T���v�����O�f�[�^�o�͒P��#2	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT3	64	/* �T���v�����O�f�[�^�o�͒P��#3	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT4	65	/* �T���v�����O�f�[�^�o�͒P��#4	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT5	66	/* �T���v�����O�f�[�^�o�͒P��#5	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT6	67	/* �T���v�����O�f�[�^�o�͒P��#6	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT7	68	/* �T���v�����O�f�[�^�o�͒P��#7	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT8	69	/* �T���v�����O�f�[�^�o�͒P��#8	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_AT_SMP_STS	70	/* �T���v�����O��ԁi�I�[�g�`���[�j���O�p�j	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_DELAY	71	/* �T���v�����O�f�B���C���ԁi�I�[�g�`���[�j���O�p�j	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_START_REQ	72	/* �T�C�N���X�^�[�g�v���i�I�[�g�`���[�j���O�p�j	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_START_LOCK	73	/* �T�C�N���X�^�[�g�����i�I�[�g�`���[�j���O�p�j	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_SAMP_NOS	74	/* �T���v�����O���i�I�[�g�`���[�j���O�p�j	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_OP_CHK	75	/* OP�`�F�b�N���i�I�[�g�`���[�j���O�p�j	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_SMP_AXNO	76	/* �Ώێ��ԍ��w��i�I�[�g�`���[�j���O�p�j	*//* P1X-A145 */
#define	M_SSEC_SMP_PRM_AT_MSIG_RATE	77	/* M�n����U�T���v�����O�����i�I�[�g�`���[�j���O�p�j	*//* P1X-A145A */
#define	M_SSEC_SMP_PRM_STOP_DELAY	78	/* ��~�f�B���C����	*//* P1X-A141E */
#define	M_SSEC_SMP_PRM_HIGH_FREQ	79	/* �������T���v�����O	*//* P1X-A440 */
#define	M_SSEC_SMP_PRM_AT_RINGBUF_NOS	80	/* �����O�o�b�t�@����	*//* P1X-A145M */
#define	M_SSEC_SMP_PRM_SAMPLING_NOS	100	/* �T���v�����O�f�[�^��	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_SMP_STS	110	/* �T���v�����O���	*//* P1X-A141A */

/* �T���v�����O�f�[�^	*/

/* �g�`�\���p�����[�^	*/

/* �g�`�\�����	*/

/* �A���[������	*/

/* �L�[����	*/
#define	M_SSEC_KEYHIST_SAMPSTS	1	/* �T���v�����O���W���	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_HISTSTS	2	/* �������W���	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SPEC_SYS	11	/* �d�l�|�n��	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SPEC_SP	12	/* �d�l�|�厲	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SPEC_SV	13	/* �d�l�|�T�[�{	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_HW	21	/* �f�[�^�|H/W�\��	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SW	22	/* �f�[�^�|S/W�\��	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_KEYHIST	23	/* �f�[�^�|�L�[����	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_ALARMHIST	24	/* �f�[�^�|�A���[������	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_PLCIOHIST	25	/* �f�[�^�|PLC���o�͐M������	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_ACINHIST	26	/* �f�[�^�|AC���͓d���ُ헚��	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SPDATA1	27	/* �f�[�^�|�厲�f�[�^1	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SPDATA2	28	/* �f�[�^�|�厲�f�[�^2	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SVDATA1	29	/* �f�[�^�|�T�[�{�f�[�^1	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SVDATA2	30	/* �f�[�^�|�T�[�{�f�[�^2	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_MODALINFO	31	/* �f�[�^�|���[�_�����	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_PRGDATA	32	/* �f�[�^�|�v���O�����f�[�^	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_COORDDATA	33	/* �f�[�^�|���W�f�[�^	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SAMP_TRIGGER	100	/* �T���v�����O�J�n�E��~�v���i�蓮�j	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_HIST_TRIGGER	101	/* �����J�n�E��~�v���i�蓮�j	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_PWON	105	/* �d���������A�f�[�^���W�J�n�E��~�v��	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SAMP_CLR	110	/* �T���v�����O�f�[�^�N���A	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_HIST_CLR	111	/* �����f�[�^�N���A	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_ALMHIST_CLR	112	/* �A���[�������f�[�^�N���A	*//* P1X-A047A */

/* I/F�M������	*/

/* ���������[�h�^���C�g	*/

/* �厲�A�i���O����	*/
#define	M_SSEC_SANA_AUTO_AJST_SET	1	/* ���������v��	*//* P1X-A033 */
#define	M_SSEC_SANA_AUTO_AJST_STS	2	/* �����������	*//* P1X-A033 */
#define	M_SSEC_SANA_MANU_SELECT	3	/* �蓮�����f�[�^�I��	*//* P1X-A033 */
#define	M_SSEC_SANA_MANU_DATA	4	/* �蓮�������f�[�^	*//* P1X-A033 */
#define	M_SSEC_SANA_OFFSET(x)	(10+(x))	/* S�A�i����Ch0�`3 �I�t�Z�b�g(x=0�`3)	*//* P1X-A033 */
#define	M_SSEC_SANA_PLUS_GAIN(x)	(20+(x))	/* S�A�i����Ch0�`3 +�Q�C��   (x=0�`3)	*//* P1X-A033 */
#define	M_SSEC_SANA_MINUS_GAIN(x)	(30+(x))	/* S�A�i����Ch0�`3 -�Q�C��   (x=0�`3)	*//* P1X-A033 */

/* ���_���A�p�����[�^/PLC�����_���A�p�����[�^	*/
#define	M_SSEC_MPREFR_G28RAP	2025	/* G28�����葬�x	*//* P1X-A020 */
#define	M_SSEC_MPREFR_G28CRP	2026	/* G28�A�v���[�`���x	*//* P1X-A020 */
#define	M_SSEC_MPREFR_G28	2027	/* ���t�@�����X�_�V�t�g��	*//* P1X-A020 */
#define	M_SSEC_MPREFR_GRSFT	2028	/* �O���b�h�}�X�N��	*//* P1X-A020 */
#define	M_SSEC_MPREFR_GRSPC	2029	/* �O���b�h�Ԋu	*//* P1X-A020 */
#define	M_SSEC_MPREFR_DIA	2030	/* ���t�@�����X�_����(-)	*//* P1X-A020 */
#define	M_SSEC_MPREFR_NOREF	2031	/* ���t�@�����X�_ �Ȃ���	*//* P1X-A020 */
#define	M_SSEC_MPREFR_NOCHK	2032	/* ���t�@�����X�_ ���A�����`�F�b�N�Ȃ�	*//* P1X-A020 */
#define	M_SSEC_MPREFR_ZP_NO	2033	/* Z���p���X�����t�@�����X�_���A �厲�G���R�[�_�ԍ�(zp_no)	*//* P1X-A020 */
#define	M_SSEC_MPREFR_RFPOFS	2034	/* ���t�@�����X�_�I�t�Z�b�g��	*//* P1X-A248 */
#define	M_SSEC_MPREFR_SRCHMAX	2035	/* ���t�@�����X�_�ő呖������	*//* P1X-A248 */
#define	M_SSEC_MPREFR_SLV_ADJUST	2036	/* ���_������	*//* P1X-A106K */
#define	M_SSEC_MPREFR_REF1	2037	/* #1 ���t�@�����X�_	*//* P1X-A020 */
#define	M_SSEC_MPREFR_REF2	2038	/* #2 ���t�@�����X�_	*//* P1X-A020 */
#define	M_SSEC_MPREFR_REF3	2039	/* #3 ���t�@�����X�_	*//* P1X-A020 */
#define	M_SSEC_MPREFR_REF4	2040	/* #4 ���t�@�����X�_	*//* P1X-A020 */

/* �T�[�{�p�����[�^/PLC���T�[�{�p�����[�^	*/
#define	M_SSEC_MPSV_SV001	1	/* SV01:���[�^���̃M����	*/
#define	M_SSEC_MPSV_SV002	2	/* SV02:�@�B���̃M����	*/
#define	M_SSEC_MPSV_SV003	3	/* SV03:�ʒu���[�v�Q�C��1	*/
#define	M_SSEC_MPSV_SV004	4	/* SV04:�ʒu���[�v�Q�C��2	*/
#define	M_SSEC_MPSV_SV005	5	/* SV05:���x���[�v�Q�C��1	*/
#define	M_SSEC_MPSV_SV006	6	/* SV06:���x���[�v�Q�C��2	*/
#define	M_SSEC_MPSV_SV007	7	/* SV07:���x���[�v�x��⏞	*/
#define	M_SSEC_MPSV_SV008	8	/* SV08:���x���[�v�i�ݕ⏞	*/
#define	M_SSEC_MPSV_SV009	9	/* SV09:�d�����[�vq���i�ݕ⏞	*/
#define	M_SSEC_MPSV_SV010	10	/* SV10:�d�����[�vd���i�ݕ⏞	*/
#define	M_SSEC_MPSV_SV011	11	/* SV11:�d�����[�vq���Q�C��	*/
#define	M_SSEC_MPSV_SV012	12	/* SV12:�d�����[�vd���Q�C��	*/
#define	M_SSEC_MPSV_SV013	13	/* SV13:�d�������l1	*/
#define	M_SSEC_MPSV_SV014	14	/* SV14:�d�������l2	*/
#define	M_SSEC_MPSV_SV015	15	/* SV15:�����x�t�B�[�h�t�H���[�h�Q�C��	*/
#define	M_SSEC_MPSV_SV016	16	/* SV16:���X�g���[�V�����␳�Q�C��1	*/
#define	M_SSEC_MPSV_SV017	17	/* SV17:�T�[�{�V�X�e���d�l	*/
#define	M_SSEC_MPSV_SV018	18	/* SV18:�{�[���l�W�s�b�`	*/
#define	M_SSEC_MPSV_SV019	19	/* SV19:�ʒu���o�핪��\	*/
#define	M_SSEC_MPSV_SV020	20	/* SV20:���x���o�핪��\	*/
#define	M_SSEC_MPSV_SV021	21	/* SV21:�ߕ��׎��萔	*/
#define	M_SSEC_MPSV_SV022	22	/* SV22:�ߕ��׌��o���x��	*/
#define	M_SSEC_MPSV_SV023	23	/* SV23:�덷�ߑ啝1	*/
#define	M_SSEC_MPSV_SV024	24	/* SV24:�C���|�W�V������	*/
#define	M_SSEC_MPSV_SV025	25	/* SV25:���[�^�^�C�v	*/
#define	M_SSEC_MPSV_SV026	26	/* SV26:�덷�ߑ啝2(�T�[�{�I�t��)	*/
#define	M_SSEC_MPSV_SV027	27	/* SV27:�T�[�{�@�\1	*/
#define	M_SSEC_MPSV_SV028	28	/* SV28:���g�p	*/
#define	M_SSEC_MPSV_SV029	29	/* SV29:���g�p	*/
#define	M_SSEC_MPSV_SV030	30	/* SV30:���g�p	*/
#define	M_SSEC_MPSV_SV031	31	/* SV31:�I�[�o�V���[�g�␳�Q�C��1	*/
#define	M_SSEC_MPSV_SV032	32	/* SV32:�g���N�I�t�Z�b�g�␳�Q�C��	*/
#define	M_SSEC_MPSV_SV033	33	/* SV33:�T�[�{�@�\2	*/
#define	M_SSEC_MPSV_SV034	34	/* SV34:�T�[�{�@�\3	*/
#define	M_SSEC_MPSV_SV035	35	/* SV35:�T�[�{�@�\4	*/
#define	M_SSEC_MPSV_SV036	36	/* SV36:�p���[�T�v���C�^�C�v	*/
#define	M_SSEC_MPSV_SV037	37	/* SV37:���[�^���Z�C�i�[�V����	*/
#define	M_SSEC_MPSV_SV038	38	/* SV38:�@�B���U�}���t�B���^���g��	*/
#define	M_SSEC_MPSV_SV039	39	/* SV39:���X�g���[�V�����␳�^�C�~���O	*/
#define	M_SSEC_MPSV_SV040	40	/* SV40:���X�g���[�V�����␳�s����(����8bit)	*/
#define	M_SSEC_MPSV_SV041	41	/* SV41:���X�g���[�V�����␳�Q�C��2	*/
#define	M_SSEC_MPSV_SV042	42	/* SV42:�I�[�o�V���[�g�␳�Q�C��2	*/
#define	M_SSEC_MPSV_SV043	43	/* SV43:�I�u�U�[�o1	*/
#define	M_SSEC_MPSV_SV044	44	/* SV44:�I�u�U�[�o2	*/
#define	M_SSEC_MPSV_SV045	45	/* SV45:���g�p	*/
#define	M_SSEC_MPSV_SV046	46	/* SV46:���g�p	*/
#define	M_SSEC_MPSV_SV047	47	/* SV47:�U�N�d���␳	*/
#define	M_SSEC_MPSV_SV048	48	/* SV48:�㉺�������h�~�u���[�L����x������	*/
#define	M_SSEC_MPSV_SV049	49	/* SV49:�厲�����ʒu���[�v�Q�C��1	*/
#define	M_SSEC_MPSV_SV050	50	/* SV50:�厲�����ʒu���[�v�Q�C��2	*/
#define	M_SSEC_MPSV_SV051	51	/* SV51:���g�p	*/
#define	M_SSEC_MPSV_SV052	52	/* SV52:���g�p	*/
#define	M_SSEC_MPSV_SV053	53	/* SV53:�덷�ߑ啝3�덷	*/
#define	M_SSEC_MPSV_SV054	54	/* SV54:���g�p	*/
#define	M_SSEC_MPSV_SV055	55	/* SV55:���g�p	*/
#define	M_SSEC_MPSV_SV056	56	/* SV56:�����h�~�������䎞�萔	*/
#define	M_SSEC_MPSV_SV057	57	/* SV57:�n�C�Q�C���R���g���[���萔	*/
#define	M_SSEC_MPSV_SV058	58	/* SV58:�厲�������n�C�Q�C���萔	*/
#define	M_SSEC_MPSV_SV059	59	/* SV59:���g�p	*/
#define	M_SSEC_MPSV_SV060	60	/* SV60:���g�p	*/
#define	M_SSEC_MPSV_SV061	61	/* SV61:D/A�o�̓`�����l��1�f�[�^�ԍ�	*/
#define	M_SSEC_MPSV_SV062	62	/* SV62:D/A�o�̓`�����l��2�f�[�^�ԍ�	*/
#define	M_SSEC_MPSV_SV063	63	/* SV63:D/A�o�̓`�����l��1�o�͔{��	*/
#define	M_SSEC_MPSV_SV064	64	/* SV64:D/A�o�̓`�����l��2�o�͔{��	*/
#define	M_SSEC_MPSV_SV065	65	/* SV65	*/
#define	M_SSEC_MPSV_SV073	73	/* SV73	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV074	74	/* SV74	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV075	75	/* SV75	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV076	76	/* SV76	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV081	81	/* SV81:�T�[�{�d�l2	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV082	82	/* SV82:����T�[�{�@�\�I��5	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV083	83	/* SV83:����T�[�{�@�\�I��6	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV084	84	/* SV84:����T�[�{�@�\�I��7	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV085	85	/* SV85:���X�g���[�V�����␳3 �o�l�萔	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV086	86	/* SV86:���X�g���[�V�����␳3 �S���W��	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV087	87	/* SV87	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV088	88	/* SV88	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV089	89	/* SV89	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV090	90	/* SV90	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV091	91	/* SV91	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV092	92	/* SV92	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV093	93	/* SV93	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV094	94	/* SV94	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV095	95	/* SV95	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV096	96	/* SV96	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV097	97	/* SV97	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV098	98	/* SV98	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV099	99	/* SV99	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV100	100	/* SV100	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV101	101	/* SV101	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV102	102	/* SV102	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV103	103	/* SV103	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV104	104	/* SV104	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV105	105	/* SV105	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV106	106	/* SV106	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV107	107	/* SV107	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV108	108	/* SV108	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV109	109	/* SV109	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV110	110	/* SV110	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV111	111	/* SV111	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV112	112	/* SV112	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV113	113	/* SV113	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV114	114	/* SV114	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV115	115	/* SV115	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV116	116	/* SV116	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV117	117	/* SV117	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV118	118	/* SV118	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV119	119	/* SV119	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV120	120	/* SV120	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV121	121	/* SV121	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV122	122	/* SV122	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV123	123	/* SV123	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV124	124	/* SV124	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV125	125	/* SV125	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV126	126	/* SV126	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV127	127	/* SV127	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV128	128	/* SV128	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV(x)	(x)	/* SV129�`SV256 (x=129�`256)	*//* P1X-A008H */

/* �厲�d�l�p�����[�^	*/
#define	M_SSEC_MPSSPC_SALIM1	1	/* ���E��]���M��00	*/
#define	M_SSEC_MPSSPC_SALIM2	2	/* ���E��]���M��01	*/
#define	M_SSEC_MPSSPC_SALIM3	3	/* ���E��]���M��10	*/
#define	M_SSEC_MPSSPC_SALIM4	4	/* ���E��]���M��11	*/
#define	M_SSEC_MPSSPC_SAMAX1	5	/* �ō���]���M��00	*/
#define	M_SSEC_MPSSPC_SAMAX2	6	/* �ō���]���M��01	*/
#define	M_SSEC_MPSSPC_SAMAX3	7	/* �ō���]���M��10	*/
#define	M_SSEC_MPSSPC_SAMAX4	8	/* �ō���]���M��11	*/
#define	M_SSEC_MPSSPC_SASIFT1	9	/* �V�t�g��]���M��00	*/
#define	M_SSEC_MPSSPC_SASIFT2	10	/* �V�t�g��]���M��01	*/
#define	M_SSEC_MPSSPC_SASIFT3	11	/* �V�t�g��]���M��10	*/
#define	M_SSEC_MPSSPC_SASIFT4	12	/* �V�t�g��]���M��11	*/
#define	M_SSEC_MPSSPC_SATAP1	13	/* �^�b�v��]���M��00	*/
#define	M_SSEC_MPSSPC_SATAP2	14	/* �^�b�v��]���M��01	*/
#define	M_SSEC_MPSSPC_SATAP3	15	/* �^�b�v��]���M��10	*/
#define	M_SSEC_MPSSPC_SATAP4	16	/* �^�b�v��]���M��11	*/
#define	M_SSEC_MPSSPC_SATPST1	17	/* �^�b�v���萔�M��00	*/
#define	M_SSEC_MPSSPC_SATPST2	18	/* �^�b�v���萔�M��01	*/
#define	M_SSEC_MPSSPC_SATPST3	19	/* �^�b�v���萔�M��10	*/
#define	M_SSEC_MPSSPC_SATPST4	20	/* �^�b�v���萔�M��11	*/
#define	M_SSEC_MPSSPC_SAORI	21	/* �I���G���g��]��	*/
#define	M_SSEC_MPSSPC_ENCRATE	22	/* �G���R�[�_�M����	*/
#define	M_SSEC_MPSSPC_SMIN	23	/* Smin(�ݒ�\�ŏ���]���x)	*/
#define	M_SSEC_MPSSPC_SLIMIT	24	/* Slimit(�ݒ�\�ő��]���x)	*/
#define	M_SSEC_MPSSPC_SDAOUT	25	/* �厲�ڑ�	*/
#define	M_SSEC_MPSSPC_ENCON	26	/* �厲�G���R�[�_	*/
#define	M_SSEC_MPSSPC_CSORI	27	/* �I���G���g���̊����I���d�l	*/
#define	M_SSEC_MPSSPC_CSSYN	28	/* �厲����(�|���S��)���̊����I���d�l	*/
#define	M_SSEC_MPSSPC_SPRCMM	29	/* �厲���]/�t�] M�w��	*/
#define	M_SSEC_MPSSPC_TAPSEL	30	/* �񓯊��^�b�v�M���I��	*/
#define	M_SSEC_MPSSPC_SMCP_NO	31	/* �A���v�C���^�t�F�[�X�`�����l���ԍ�	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_OUTUNIT	35	/* �o�͒P��(�厲)	*//* P1X-A070 */
#define	M_SSEC_MPSSPC_TAPERR	36	/* �����^�b�v���e�덷��	*//* P1X-A130 */
#define	M_SSEC_MPSSPC_SATAP2_1	37	/* �����^�b�v�؊��厲��]��2�M��00	*/
#define	M_SSEC_MPSSPC_SATAP2_2	38	/* �����^�b�v�؊��厲��]��2�M��01	*/
#define	M_SSEC_MPSSPC_SATAP2_3	39	/* �����^�b�v�؊��厲��]��2�M��10	*/
#define	M_SSEC_MPSSPC_SATAP2_4	40	/* �����^�b�v�؊��厲��]��2�M��11	*/
#define	M_SSEC_MPSSPC_SATPST2_1	41	/* �����^�b�v�؊����萔2�M��00	*/
#define	M_SSEC_MPSSPC_SATPST2_2	42	/* �����^�b�v�؊����萔2�M��01	*/
#define	M_SSEC_MPSSPC_SATPST2_3	43	/* �����^�b�v�؊����萔2�M��10	*/
#define	M_SSEC_MPSSPC_SATPST2_4	44	/* �����^�b�v�؊����萔2�M��11	*/
#define	M_SSEC_MPSSPC_SATPST3_1	45	/* �����^�b�v�؊����萔3�M��00	*/
#define	M_SSEC_MPSSPC_SATPST3_2	46	/* �����^�b�v�؊����萔3�M��01	*/
#define	M_SSEC_MPSSPC_SATPST3_3	47	/* �����^�b�v�؊����萔3�M��10	*/
#define	M_SSEC_MPSSPC_SATPST3_4	48	/* �����^�b�v�؊����萔3�M��11	*/
#define	M_SSEC_MPSSPC_SPT	49	/* �厲�������������萔	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_DPRLV	50	/* �厲������]�����B���x��	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPPLV	51	/* �厲�����ʑ����B���x��	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPPLR	52	/* �厲����t���O1 BIT0:�厲���[�^/�厲,���΋ɐ�	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPPST	53	/* �厲�����ʑ��V�t�g	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC1	54	/* �厲�������i���������萔�؂芷�����x1	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC2	55	/* �厲�������i���������萔�؂芷�����x2	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC3	56	/* �厲�������i���������萔�؂芷�����x3	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC4	57	/* �厲�������i���������萔�؂芷�����x4	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC5	58	/* �厲�������i���������萔�؂芷�����x5	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC6	59	/* �厲�������i���������萔�؂芷�����x6	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC7	60	/* �厲�������i���������萔�؂芷�����x7	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV1	61	/* ���萔�؂芷�����x1���̔{��(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV2	62	/* ���萔�؂芷�����x2���̔{��(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV3	63	/* ���萔�؂芷�����x3���̔{��(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV4	64	/* ���萔�؂芷�����x4���̔{��(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV5	65	/* ���萔�؂芷�����x5���̔{��(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV6	66	/* ���萔�؂芷�����x6���̔{��(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV7	67	/* ���萔�؂芷�����x7���̔{��(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SYMTM1	68	/* �厲������펞��1 �ʑ����킹�O	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SYMTM2	69	/* �厲������펞��2 �ʑ����킹��	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SYPRT	70	/* �厲�����ʑ����킹������	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SSCDRSELSP	71	/* ���x�Ď��厲�h�A�I��	*//* P1X-A157 */
#define	M_SSEC_MPSSPC_SSCSVOFFLTRSP	72	/* ���x�Ď��T�[�{�I�t���厲�ُ팟�o����	*//* P1X-A157E */
#define	M_SSEC_MPSSPC_SPGBSP	74	/* ��AG/B �厲�w��	*//* P1X-A535 */
#define	M_SSEC_MPSSPC_SPTS1	101	/* S�w�߂ɂ��厲��]���̃M�A(00)�̎��萔	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SPTS2	102	/* S�w�߂ɂ��厲��]���̃M�A(01)�̎��萔	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SPTS3	103	/* S�w�߂ɂ��厲��]���̃M�A(10)�̎��萔	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SPTS4	104	/* S�w�߂ɂ��厲��]���̃M�A(11)�̎��萔	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SUT	105	/* ���x���B�͈�	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_ORITYP	106	/* �I���G���g�d�l	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_ORISPD	107	/* �I���G���g���x	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_ORISFT	108	/* �I���G���g�C���|�W�V�����V�t�g��	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_ZDETSPD	109	/* ����Z�����o���x	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_TAPSPD	110	/* �����^�b�v���_���A���x	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_TAPSFT	111	/* �����^�b�v���_���A�V�t�g��	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_CAXSPD	112	/* �b�����_���A���x	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_CAXSFT	113	/* �b�����_���A�V�t�g��	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_CAXPARACHG	114	/* �厲C���p�����[�^�ؑւ�	*//* P1X-A091w */
#define	M_SSEC_MPSSPC_SP2TS1	115	/* �I���G���g�A�ʒu���[�v���_���A�����̎��萔�i�M�A00)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_SP2TS2	116	/* �I���G���g�A�ʒu���[�v���_���A�����̎��萔�i�M�A01)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_SP2TS3	117	/* �I���G���g�A�ʒu���[�v���_���A�����̎��萔�i�M�A10)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_SP2TS4	118	/* �I���G���g�A�ʒu���[�v���_���A�����̎��萔�i�M�A11)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_STAPTR	120	/* ���������^�b�v�̎��萔�Z�k��	*//* P1X-A282 */
#define	M_SSEC_MPSSPC_TRET	121	/* �^���b�g���o��	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_GRC	122	/* �^���b�g���M����	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_SPD	123	/* �^���b�g���o�����x	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_T	124	/* �^���b�g���o�����萔	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_INPOS	125	/* �^���b�g���o���C���|�W�V������	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_FIN_OFF	126	/* ���o���ʒu���ߊ����I�t���ԃ^�C�}	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_SPEC_SP	127	/* �厲�d�l	*//* P1X-A091AP */
#define	M_SSEC_MPSSPC_ORI_SPEC	128	/* �I���G���g�d�l	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_CAX_SPEC	129	/* �厲C���d�l	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_SYN_SPEC	130	/* �厲�����d�l	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_TAP_SPEC	131	/* �����^�b�v�d�l	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_ORI_INP2	132	/* �I���G���g��2�C���|�W�V������	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_HOBERRPHS	133	/* �z�u���x��i�i�݁j���e�p�x	*//* P1X-A304 */
#define	M_SSEC_MPSSPC_HOBCMPT	134	/* �z�u�������␳�ꎟ�x�ꎞ�萔	*//* P1X-A304 */
#define	M_SSEC_MPSSPC_HOBFFG	135	/* �z�u���t�B�[�h�t�H���[�h�Q�C��	*//* P1X-A304 */
#define	M_SSEC_MPSSPC_STAP_AX_OFF	137	/* ���������^�b�v������	*//* P1X-A282H */
#define	M_SSEC_MPSSPC_MOT_TYPE	138	/* ���[�^�^��	*//* P1X-A399 */
#define	M_SSEC_MPSSPC_SDINSP	140	/* ���x�Ď����̓h�A�ԍ�	*//* P1X-A157U */
#define	M_SSEC_MPSSPC_RATEDOUTL	3146	/* �d�͎Z�o�p�Z���Ԓ�i�o��(L�����p)	*//* P1X-A481 */
#define	M_SSEC_MPSSPC_RATEDOUTH	3147	/* �d�͎Z�o�p�Z���Ԓ�i�o��(H�����p)	*//* P1X-A481 */

/* �厲�p�����[�^	*/
#define	M_SSEC_MPSP_SP001	1	/* SP001:�}�O�Z���T�A���[�^�r���h�C���G���R�[�_�I���G���g�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP002	2	/* SP002:�G���R�[�_�I���G���g�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP003	3	/* SP003:C����؍펞�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP004	4	/* SP004:�I���G���g�C���|�W�V������	*/
#define	M_SSEC_MPSP_SP005	5	/* SP005:�I���G���g�֑ؑ��x�����l	*/
#define	M_SSEC_MPSP_SP006	6	/* SP006:�I���G���g��������	*/
#define	M_SSEC_MPSP_SP007	7	/* SP007:�I���G���g�|�W�V�����V�t�g��	*/
#define	M_SSEC_MPSP_SP008	8	/* SP008:���g�p	*/
#define	M_SSEC_MPSP_SP009	9	/* SP009:�����^�b�v�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP010	10	/* SP010:�厲�����ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP011	11	/* SP011:���g�p	*/
#define	M_SSEC_MPSP_SP012	12	/* SP012:���g�p	*/
#define	M_SSEC_MPSP_SP013	13	/* SP013:���g�p	*/
#define	M_SSEC_MPSP_SP014	14	/* SP014:���g�p	*/
#define	M_SSEC_MPSP_SP015	15	/* SP015:���g�p	*/
#define	M_SSEC_MPSP_SP016	16	/* SP016:���g�p	*/
#define	M_SSEC_MPSP_SP017	17	/* SP017:���[�^�ō����x	*/
#define	M_SSEC_MPSP_SP018	18	/* SP018:���[�^�둬�x	*/
#define	M_SSEC_MPSP_SP019	19	/* SP019:���x�w�߉��������萔	*/
#define	M_SSEC_MPSP_SP020	20	/* SP020:���x���o�Z�b�g�l	*/
#define	M_SSEC_MPSP_SP021	21	/* SP021:�g���N����1	*/
#define	M_SSEC_MPSP_SP022	22	/* SP022:���x���䎞���x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP023	23	/* SP023:���x���䎞���x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP024	24	/* SP024:���g�p	*/
#define	M_SSEC_MPSP_SP025	25	/* SP025:�厲���M������1	*/
#define	M_SSEC_MPSP_SP026	26	/* SP026:�厲���M������2	*/
#define	M_SSEC_MPSP_SP027	27	/* SP027:�厲���M������3	*/
#define	M_SSEC_MPSP_SP028	28	/* SP028:�厲���M������4	*/
#define	M_SSEC_MPSP_SP029	29	/* SP029:���[�^���M������1	*/
#define	M_SSEC_MPSP_SP030	30	/* SP030:���[�^���M������2	*/
#define	M_SSEC_MPSP_SP031	31	/* SP031:���[�^���M������3	*/
#define	M_SSEC_MPSP_SP032	32	/* SP032:���[�^���M������4	*/
#define	M_SSEC_MPSP_SP033	33	/* SP033:�厲�@�\1	*/
#define	M_SSEC_MPSP_SP034	34	/* SP034:�厲�@�\2	*/
#define	M_SSEC_MPSP_SP035	35	/* SP035:�厲�@�\3	*/
#define	M_SSEC_MPSP_SP036	36	/* SP036:�厲�@�\4	*/
#define	M_SSEC_MPSP_SP037	37	/* SP037:�厲�@�\5	*/
#define	M_SSEC_MPSP_SP038	38	/* SP038:�厲�@�\6	*/
#define	M_SSEC_MPSP_SP039	39	/* SP039:�A���v�^�C�v	*/
#define	M_SSEC_MPSP_SP040	40	/* SP040:���[�^�^�C�v	*/
#define	M_SSEC_MPSP_SP041	41	/* SP041:�񐶒�R�^�C�v(SPJ)/�p���[�T�v���C�^�C�v(SP)	*/
#define	M_SSEC_MPSP_SP042	42	/* SP042:C���p���o�탌���W	*/
#define	M_SSEC_MPSP_SP043	43	/* SP043:�����^�b�v�A�厲�����p���o�탌���W	*/
#define	M_SSEC_MPSP_SP044	44	/* SP044:NC��M����	*/
#define	M_SSEC_MPSP_SP045	45	/* SP045:���g�p	*/
#define	M_SSEC_MPSP_SP046	46	/* SP046:���x�w�߃f���A���E�N�b�V����	*/
#define	M_SSEC_MPSP_SP047	47	/* SP047:���x���o���Z�b�g�l	*/
#define	M_SSEC_MPSP_SP048	48	/* SP048:���x���B�͈�	*/
#define	M_SSEC_MPSP_SP049	49	/* SP049:�g���N����2	*/
#define	M_SSEC_MPSP_SP050	50	/* SP050:�g���N����3	*/
#define	M_SSEC_MPSP_SP051	51	/* SP051:�g���N����4(���g�p)	*/
#define	M_SSEC_MPSP_SP052	52	/* SP052:�g���N����5(���g�p)	*/
#define	M_SSEC_MPSP_SP053	53	/* SP053:�g���N����6(���g�p)	*/
#define	M_SSEC_MPSP_SP054	54	/* SP054:�g���N����7(���g�p)	*/
#define	M_SSEC_MPSP_SP055	55	/* SP055:���x�΍��ߑ�^�C�}�[	*/
#define	M_SSEC_MPSP_SP056	56	/* SP056:�ϗ㎥(min�l)	*/
#define	M_SSEC_MPSP_SP057	57	/* SP057:�ߓx�֑ؑ��x	*/
#define	M_SSEC_MPSP_SP058	58	/* SP058:���g�p	*/
#define	M_SSEC_MPSP_SP059	59	/* SP059:�����ؑփx�[�X�Ւf�^�C�}�[	*/
#define	M_SSEC_MPSP_SP060	60	/* SP060:�����ؑ֌�d�������^�C�}�[	*/
#define	M_SSEC_MPSP_SP061	61	/* SP061:�d�������l	*/
#define	M_SSEC_MPSP_SP062	62	/* SP062:���g�p	*/
#define	M_SSEC_MPSP_SP063	63	/* SP063:�ߕ��׃A���[�����o����	*/
#define	M_SSEC_MPSP_SP064	64	/* SP064:�ߕ��׃A���[�����o���x��	*/
#define	M_SSEC_MPSP_SP065	65	/* SP065:�ϑ��x���[�v���Q�C���ڕW�l	*/
#define	M_SSEC_MPSP_SP066	66	/* SP066:�ϑ��x���[�v���Q�C���ύX�J�n���x	*/
#define	M_SSEC_MPSP_SP067	67	/* SP067:�ϓd�����[�v�Q�C���ύX�J�n���x	*/
#define	M_SSEC_MPSP_SP068	68	/* SP068:�ϓd�����[�v�Q�C���ύX�I�����x	*/
#define	M_SSEC_MPSP_SP069	69	/* SP069:�ϓd�����[�v�Q�C���ڕW�l	*/
#define	M_SSEC_MPSP_SP070	70	/* SP070:�@�B���U�}���t�B���^���g��	*/
#define	M_SSEC_MPSP_SP071	71	/* SP071:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP072	72	/* SP072:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP073	73	/* SP073:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP074	74	/* SP074:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP075	75	/* SP075:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP076	76	/* SP076:�@�B���U�}���t�B���^���쑬�x	*/
#define	M_SSEC_MPSP_SP077	77	/* SP077:Td���ԑI��	*/
#define	M_SSEC_MPSP_SP078	78	/* SP078:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP079	79	/* SP079:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP080	80	/* SP080:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP081	81	/* SP081:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP082	82	/* SP082:�Œ萧��萔	*/
#define	M_SSEC_MPSP_SP083	83	/* SP083:���g�p	*/
#define	M_SSEC_MPSP_SP084	84	/* SP084:���g�p	*/
#define	M_SSEC_MPSP_SP085	85	/* SP085:���g�p	*/
#define	M_SSEC_MPSP_SP086	86	/* SP086:���g�p	*/
#define	M_SSEC_MPSP_SP087	87	/* SP087:�������σg���N�����{���ڕW�l	*/
#define	M_SSEC_MPSP_SP088	88	/* SP088:�������σg���N�����{���ڕW�l	*/
#define	M_SSEC_MPSP_SP089	89	/* SP089:���g�p	*/
#define	M_SSEC_MPSP_SP090	90	/* SP090:�������o��p���X�덷���e�l	*/
#define	M_SSEC_MPSP_SP091	91	/* SP091:���g�p	*/
#define	M_SSEC_MPSP_SP092	92	/* SP092:���g�p	*/
#define	M_SSEC_MPSP_SP093	93	/* SP093:�ʒu���o��p���X�덷���e�l	*/
#define	M_SSEC_MPSP_SP094	94	/* SP094:���[�h���[�^�[�o�̓t�B���^�[	*/
#define	M_SSEC_MPSP_SP095	95	/* SP095:���x�t�B�[�h�o�b�N���ω�	*/
#define	M_SSEC_MPSP_SP096	96	/* SP096:�G���R�[�_�M����	*/
#define	M_SSEC_MPSP_SP097	97	/* SP097:�I���G���g�d�l	*/
#define	M_SSEC_MPSP_SP098	98	/* SP098:�I���G���g���A���x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP099	99	/* SP099:�I���G���g���A���x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP100	100	/* SP100:�I���G���g���A���x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP101	101	/* SP101:�I���G���g�O�o���C���|�W�V������	*/
#define	M_SSEC_MPSP_SP102	102	/* SP102:�I���G���g���덷�ߑ啝	*/
#define	M_SSEC_MPSP_SP103	103	/* SP103:�ʒu���ߊ����I�t���ԃ^�C�}�[	*/
#define	M_SSEC_MPSP_SP104	104	/* SP104:�I���G���g�T�[�{���b�N���g���N�����l	*/
#define	M_SSEC_MPSP_SP105	105	/* SP105:�I���G���g�d�����[�v�Q�C���{��1	*/
#define	M_SSEC_MPSP_SP106	106	/* SP106:�I���G���g�d�����[�v�Q�C���{��2	*/
#define	M_SSEC_MPSP_SP107	107	/* SP107:�I���G���g��������2	*/
#define	M_SSEC_MPSP_SP108	108	/* SP108:�I���G���g��������3	*/
#define	M_SSEC_MPSP_SP109	109	/* SP109:�I���G���g��������4	*/
#define	M_SSEC_MPSP_SP110	110	/* SP110:���g�p	*/
#define	M_SSEC_MPSP_SP111	111	/* SP111:���g�p	*/
#define	M_SSEC_MPSP_SP112	112	/* SP112:���g�p	*/
#define	M_SSEC_MPSP_SP113	113	/* SP113:���g�p	*/
#define	M_SSEC_MPSP_SP114	114	/* SP114:�I���G���g�p���X�~�X�`�F�b�N�l	*/
#define	M_SSEC_MPSP_SP115	115	/* SP115:���g�p	*/
#define	M_SSEC_MPSP_SP116	116	/* SP116:���g�p	*/
#define	M_SSEC_MPSP_SP117	117	/* SP117:���g�p	*/
#define	M_SSEC_MPSP_SP118	118	/* SP118:���g�p	*/
#define	M_SSEC_MPSP_SP119	119	/* SP119:�I���G���g�ʒu�Q�C��H�����␳�{��	*/
#define	M_SSEC_MPSP_SP120	120	/* SP120:�I���G���g�ʒu�Q�C��L�����␳�{��	*/
#define	M_SSEC_MPSP_SP121	121	/* SP121:�I���G���g������H�����␳�{��	*/
#define	M_SSEC_MPSP_SP122	122	/* SP122:�I���G���g������L�����␳�{��	*/
#define	M_SSEC_MPSP_SP123	123	/* SP123:�}�O�Z���T�o�̓s�[�N�l	*/
#define	M_SSEC_MPSP_SP124	124	/* SP124:�}�O�Z���T���j�A�]�[����	*/
#define	M_SSEC_MPSP_SP125	125	/* SP125:�}�O�Z���T�؊����_	*/
#define	M_SSEC_MPSP_SP126	126	/* SP126:���g�p	*/
#define	M_SSEC_MPSP_SP127	127	/* SP127:���g�p	*/
#define	M_SSEC_MPSP_SP128	128	/* SP128:���g�p	*/
#define	M_SSEC_MPSP_SP129	129	/* SP129:C���d�l	*/
#define	M_SSEC_MPSP_SP130	130	/* SP130:C���؍펞��1�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP131	131	/* SP131:C���؍펞��2�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP132	132	/* SP132:C���؍펞��3�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP133	133	/* SP133:C����؍펞��~�ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP134	134	/* SP134:C����؍펞���x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP135	135	/* SP135:C����؍펞���x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP136	136	/* SP136:C����؍펞���x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP137	137	/* SP137:C���؍펞��1���x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP138	138	/* SP138:C���؍펞��1���x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP139	139	/* SP139:C���؍펞��1���x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP140	140	/* SP140:C���؍펞��2���x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP141	141	/* SP141:C���؍펞��2���x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP142	142	/* SP142:C���؍펞��2���x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP143	143	/* SP143:C���؍펞��3���x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP144	144	/* SP144:C���؍펞��3���x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP145	145	/* SP145:C���؍펞��3���x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP146	146	/* SP146:C���؍��~�����x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP147	147	/* SP147:C���؍��~�����x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP148	148	/* SP148:C���؍��~�����x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP149	149	/* SP149:C�����_���A���x	*/
#define	M_SSEC_MPSP_SP150	150	/* SP150:C�����_���A�����_	*/
#define	M_SSEC_MPSP_SP151	151	/* SP151:C�����_���A�V�t�g��(low byte)	*/
#define	M_SSEC_MPSP_SP152	152	/* SP152:C�����_���A�V�t�g��(high byte)	*/
#define	M_SSEC_MPSP_SP153	153	/* SP153:C���C���|�W�V������	*/
#define	M_SSEC_MPSP_SP154	154	/* SP154:C�����덷�ߑ啝(low byte)	*/
#define	M_SSEC_MPSP_SP155	155	/* SP155:C�����덷�ߑ啝(high byte)	*/
#define	M_SSEC_MPSP_SP156	156	/* SP156:���g�p	*/
#define	M_SSEC_MPSP_SP157	157	/* SP157:���g�p	*/
#define	M_SSEC_MPSP_SP158	158	/* SP158:���g�p	*/
#define	M_SSEC_MPSP_SP159	159	/* SP159:C����؍펞�ϗ㎥��	*/
#define	M_SSEC_MPSP_SP160	160	/* SP160:C���؍펞�ϗ㎥��	*/
#define	M_SSEC_MPSP_SP161	161	/* SP161:C����؍펞�d�����[�v�Q�C���{��1	*/
#define	M_SSEC_MPSP_SP162	162	/* SP162:C����؍펞�d�����[�v�Q�C���{��2	*/
#define	M_SSEC_MPSP_SP163	163	/* SP163:C���؍펞�d�����[�v�Q�C���{��1	*/
#define	M_SSEC_MPSP_SP164	164	/* SP164:C���؍펞�d�����[�v�Q�C���{��2	*/
#define	M_SSEC_MPSP_SP165	165	/* SP165:C���ʒu���[�v�Q�C��2	*/
#define	M_SSEC_MPSP_SP166	166	/* SP166:C���ʒu���[�v�Q�C��3	*/
#define	M_SSEC_MPSP_SP167	167	/* SP167:�厲�ێ��̓A�b�v���ʒu���[�v�Q�C��	*/
#define	M_SSEC_MPSP_SP168	168	/* SP168:�厲�ێ��̓A�b�v�����x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP169	169	/* SP169:�厲�ێ��̓A�b�v�����x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP170	170	/* SP170:�厲�ێ��̓A�b�v�����x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP171	171	/* SP171:���g�p	*/
#define	M_SSEC_MPSP_SP172	172	/* SP172:���g�p	*/
#define	M_SSEC_MPSP_SP173	173	/* SP173:���g�p	*/
#define	M_SSEC_MPSP_SP174	174	/* SP174:���g�p	*/
#define	M_SSEC_MPSP_SP175	175	/* SP175:���g�p	*/
#define	M_SSEC_MPSP_SP176	176	/* SP176:���g�p	*/
#define	M_SSEC_MPSP_SP177	177	/* SP177:�厲�����d�l	*/
#define	M_SSEC_MPSP_SP178	178	/* SP178:�厲���������x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP179	179	/* SP179:�厲���������x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP180	180	/* SP180:�厲���������x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP181	181	/* SP181:�厲�������ϑ��x���[�v���Q�C���ڕW�l	*/
#define	M_SSEC_MPSP_SP182	182	/* SP182:�厲�������ϑ��x���[�v���Q�C���ύX�J�n���x	*/
#define	M_SSEC_MPSP_SP183	183	/* SP183:�厲���������@��v���x	*/
#define	M_SSEC_MPSP_SP184	184	/* SP184:���g�p	*/
#define	M_SSEC_MPSP_SP185	185	/* SP185:�厲�����C���|�W�V������	*/
#define	M_SSEC_MPSP_SP186	186	/* SP186:�厲�������덷�g�啝	*/
#define	M_SSEC_MPSP_SP187	187	/* SP187:�厲�������d�����[�v�Q�C���{��1	*/
#define	M_SSEC_MPSP_SP188	188	/* SP188:�厲�������d�����[�v�Q�C���{��2	*/
#define	M_SSEC_MPSP_SP189	189	/* SP189:�厲�������ʒu���[�v�Q�C��2	*/
#define	M_SSEC_MPSP_SP190	190	/* SP190:�厲�������ʒu���[�v�Q�C��3	*/
#define	M_SSEC_MPSP_SP191	191	/* SP191:���g�p	*/
#define	M_SSEC_MPSP_SP192	192	/* SP192:���g�p	*/
#define	M_SSEC_MPSP_SP193	193	/* SP193:�����^�b�v�d�l	*/
#define	M_SSEC_MPSP_SP194	194	/* SP194:�����^�b�v�����x���[�v�Q�C����ፀ	*/
#define	M_SSEC_MPSP_SP195	195	/* SP195:�����^�b�v�����x���[�v�Q�C���ϕ���	*/
#define	M_SSEC_MPSP_SP196	196	/* SP196:�����^�b�v�����x���[�v�Q�C���x��i�ݍ�	*/
#define	M_SSEC_MPSP_SP197	197	/* SP197:���g�p	*/
#define	M_SSEC_MPSP_SP198	198	/* SP198:�����^�b�v���ϑ��x���[�v���Q�C���ڕW�l	*/
#define	M_SSEC_MPSP_SP199	199	/* SP199:�����^�b�v���ϑ��x���[�v���Q�C���ύX�J�n���x	*/
#define	M_SSEC_MPSP_SP200	200	/* SP200:�����^�b�v�����x�t�B�[�h�t�H���[�h�Q�C��(�M��1)	*/
#define	M_SSEC_MPSP_SP201	201	/* SP201:�����^�b�v�����x�t�B�[�h�t�H���[�h�Q�C��(�M��2)	*/
#define	M_SSEC_MPSP_SP202	202	/* SP202:�����^�b�v�����x�t�B�[�h�t�H���[�h�Q�C��(�M��3)	*/
#define	M_SSEC_MPSP_SP203	203	/* SP203:�����^�b�v�����x�t�B�[�h�t�H���[�h�Q�C��(�M��4)	*/
#define	M_SSEC_MPSP_SP204	204	/* SP204:���g�p	*/
#define	M_SSEC_MPSP_SP205	205	/* SP205:���g�p	*/
#define	M_SSEC_MPSP_SP206	206	/* SP206:���g�p	*/
#define	M_SSEC_MPSP_SP207	207	/* SP207:���g�p	*/
#define	M_SSEC_MPSP_SP208	208	/* SP208:���g�p	*/
#define	M_SSEC_MPSP_SP209	209	/* SP209:���g�p	*/
#define	M_SSEC_MPSP_SP210	210	/* SP210:���g�p	*/
#define	M_SSEC_MPSP_SP211	211	/* SP211:���g�p	*/
#define	M_SSEC_MPSP_SP212	212	/* SP212:���g�p	*/
#define	M_SSEC_MPSP_SP213	213	/* SP213:���g�p	*/
#define	M_SSEC_MPSP_SP214	214	/* SP214:�����^�b�v���_���A���x	*/
#define	M_SSEC_MPSP_SP215	215	/* SP215:�����^�b�v���_���A�����_	*/
#define	M_SSEC_MPSP_SP216	216	/* SP216:�����^�b�v���_���A�V�t�g��	*/
#define	M_SSEC_MPSP_SP217	217	/* SP217:�����^�b�v�C���|�W�V������	*/
#define	M_SSEC_MPSP_SP218	218	/* SP218:�����^�b�v�덷�ߑ啝	*/
#define	M_SSEC_MPSP_SP219	219	/* SP219:�����^�b�v�d�����[�v�Q�C���{��1	*/
#define	M_SSEC_MPSP_SP220	220	/* SP220:�����^�b�v�d�����[�v�Q�C���{��2	*/
#define	M_SSEC_MPSP_SP221	221	/* SP221:�����^�b�v�ʒu���[�v�Q�C��2	*/
#define	M_SSEC_MPSP_SP222	222	/* SP222:�����^�b�v�ʒu���[�v�Q�C��3	*/
#define	M_SSEC_MPSP_SP223	223	/* SP223:���g�p	*/
#define	M_SSEC_MPSP_SP224	224	/* SP224:���g�p	*/
#define	M_SSEC_MPSP_SP225	225	/* SP225:�厲���M������5	*/
#define	M_SSEC_MPSP_SP226	226	/* SP226:�厲���M������6	*/
#define	M_SSEC_MPSP_SP227	227	/* SP227:�厲���M������7	*/
#define	M_SSEC_MPSP_SP228	228	/* SP228:�厲���M������8	*/
#define	M_SSEC_MPSP_SP229	229	/* SP229:���[�^���M������5	*/
#define	M_SSEC_MPSP_SP230	230	/* SP230:���[�^���M������6	*/
#define	M_SSEC_MPSP_SP231	231	/* SP231:���[�^���M������7	*/
#define	M_SSEC_MPSP_SP232	232	/* SP232:���[�^���M������8	*/
#define	M_SSEC_MPSP_SP233	233	/* SP233:�O���I�u�U�[�o�����C�i�[�V���{��	*/
#define	M_SSEC_MPSP_SP234	234	/* SP234:�O���I�u�U�[�o���[�p�X�t�B���^���g��	*/
#define	M_SSEC_MPSP_SP235	235	/* SP235:�O���I�u�U�[�o�Q�C��	*/
#define	M_SSEC_MPSP_SP236	236	/* SP236:���g�p	*/
#define	M_SSEC_MPSP_SP237	237	/* SP237:���g�p	*/
#define	M_SSEC_MPSP_SP238	238	/* SP238:���g�p	*/
#define	M_SSEC_MPSP_SP239	239	/* SP239:���g�p	*/
#define	M_SSEC_MPSP_SP240	240	/* SP240:���g�p	*/
#define	M_SSEC_MPSP_SP241	241	/* SP241:���g�p	*/
#define	M_SSEC_MPSP_SP242	242	/* SP242:���g�p	*/
#define	M_SSEC_MPSP_SP243	243	/* SP243:���g�p	*/
#define	M_SSEC_MPSP_SP244	244	/* SP244:���g�p	*/
#define	M_SSEC_MPSP_SP245	245	/* SP245:���g�p	*/
#define	M_SSEC_MPSP_SP246	246	/* SP246:���g�p	*/
#define	M_SSEC_MPSP_SP247	247	/* SP247:���g�p	*/
#define	M_SSEC_MPSP_SP248	248	/* SP248:���g�p	*/
#define	M_SSEC_MPSP_SP249	249	/* SP249:���g�p	*/
#define	M_SSEC_MPSP_SP250	250	/* SP250:���g�p	*/
#define	M_SSEC_MPSP_SP251	251	/* SP251:���g�p	*/
#define	M_SSEC_MPSP_SP252	252	/* SP252:���g�p	*/
#define	M_SSEC_MPSP_SP253	253	/* SP253:D/A�o�̓`�����l��1�f�[�^�ԍ�	*/
#define	M_SSEC_MPSP_SP254	254	/* SP254:D/A�o�̓`�����l��2�f�[�^�ԍ�	*/
#define	M_SSEC_MPSP_SP255	255	/* SP255:D/A�o�̓`�����l��3�f�[�^�ԍ�	*/
#define	M_SSEC_MPSP_SP256	256	/* SP256:D/A�o�̓`�����l��4�f�[�^�ԍ�	*/
#define	M_SSEC_MPSP_SP257	257	/* SP257:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP258	258	/* SP258:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP259	259	/* SP259:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP260	260	/* SP260:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP261	261	/* SP261:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP262	262	/* SP262:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP263	263	/* SP263:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP264	264	/* SP264:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP265	265	/* SP265:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP266	266	/* SP266:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP267	267	/* SP267:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP268	268	/* SP268:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP269	269	/* SP269:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP270	270	/* SP270:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP271	271	/* SP271:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP272	272	/* SP272:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP273	273	/* SP273:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP274	274	/* SP274:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP275	275	/* SP275:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP276	276	/* SP276:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP277	277	/* SP277:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP278	278	/* SP278:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP279	279	/* SP279:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP280	280	/* SP280:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP281	281	/* SP281:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP282	282	/* SP282:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP283	283	/* SP283:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP284	284	/* SP284:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP285	285	/* SP285:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP286	286	/* SP286:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP287	287	/* SP287:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP288	288	/* SP288:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP289	289	/* SP289:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP290	290	/* SP290:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP291	291	/* SP291:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP292	292	/* SP292:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP293	293	/* SP293:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP294	294	/* SP294:�O���I�u�U�[�o�g���N�萔	*/
#define	M_SSEC_MPSP_SP295	295	/* SP295:�O���I�u�U�[�o���[�^�C�i�[�V��	*/
#define	M_SSEC_MPSP_SP296	296	/* SP296:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP297	297	/* SP297:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP298	298	/* SP298:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP299	299	/* SP299:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP300	300	/* SP300:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP301	301	/* SP301:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP302	302	/* SP302:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP303	303	/* SP303:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP304	304	/* SP304:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP305	305	/* SP305:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP306	306	/* SP306:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP307	307	/* SP307:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP308	308	/* SP308:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP309	309	/* SP309:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP310	310	/* SP310:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP311	311	/* SP311:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP312	312	/* SP312:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP313	313	/* SP313:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP314	314	/* SP314:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP315	315	/* SP315:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP316	316	/* SP316:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP317	317	/* SP317:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP318	318	/* SP318:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP319	319	/* SP319:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP320	320	/* SP320:���[�^�萔(H����)	*/
#define	M_SSEC_MPSP_SP321	321	/* SP321:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP322	322	/* SP322:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP323	323	/* SP323:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP324	324	/* SP324:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP325	325	/* SP325:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP326	326	/* SP326:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP327	327	/* SP327:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP328	328	/* SP328:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP329	329	/* SP329:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP330	330	/* SP330:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP331	331	/* SP331:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP332	332	/* SP332:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP333	333	/* SP333:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP334	334	/* SP334:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP335	335	/* SP335:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP336	336	/* SP336:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP337	337	/* SP337:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP338	338	/* SP338:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP339	339	/* SP339:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP340	340	/* SP340:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP341	341	/* SP341:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP342	342	/* SP342:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP343	343	/* SP343:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP344	344	/* SP344:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP345	345	/* SP345:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP346	346	/* SP346:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP347	347	/* SP347:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP348	348	/* SP348:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP349	349	/* SP349:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP350	350	/* SP350:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP351	351	/* SP351:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP352	352	/* SP352:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP353	353	/* SP353:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP354	354	/* SP354:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP355	355	/* SP355:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP356	356	/* SP356:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP357	357	/* SP357:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP358	358	/* SP358:�O���I�u�U�[�o�g���N�萔2	*/
#define	M_SSEC_MPSP_SP359	359	/* SP359:�O���I�u�U�[�o���[�^�C�i�[�V��2	*/
#define	M_SSEC_MPSP_SP360	360	/* SP360:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP361	361	/* SP361:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP362	362	/* SP362:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP363	363	/* SP363:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP364	364	/* SP364:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP365	365	/* SP365:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP366	366	/* SP366:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP367	367	/* SP367:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP368	368	/* SP368:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP369	369	/* SP369:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP370	370	/* SP370:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP371	371	/* SP371:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP372	372	/* SP372:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP373	373	/* SP373:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP374	374	/* SP374:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP375	375	/* SP375:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP376	376	/* SP376:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP377	377	/* SP377:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP378	378	/* SP378:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP379	379	/* SP379:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP380	380	/* SP380:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP381	381	/* SP381:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP382	382	/* SP382:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP383	383	/* SP383:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP384	384	/* SP384:���[�^�萔(L����)	*/
#define	M_SSEC_MPSP_SP1001	1001	/* SP1001:�ʒu�Q�C�� �ʏ�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1002	1002	/* SP1002:�ʒu�Q�C�� �厲������	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1003	1003	/* SP1003:�ʒu�Q�C�� �b����	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1004	1004	/* SP1004:�ʒu�Q�C�� �����^�b�v��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1005	1005	/* SP1005:���x �Q�C��1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1006	1006	/* SP1006:���x �i�ݕ⏞1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1007	1007	/* SP1007:���x �x��⏞1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1008	1008	/* SP1008:���x �Q�C��2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1009	1009	/* SP1009:���x �i�ݕ⏞2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1010	1010	/* SP1010:���x �x��⏞2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1011	1011	/* SP1011:�ϓd���Q�C�� �J�n���x	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1012	1012	/* SP1012:�ϓd���Q�C�� �I�����x	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1013	1013	/* SP1013:�ϓd���Q�C�� �{��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1014	1014	/* SP1014:�ŏ��㎥��1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1015	1015	/* SP1015:�ŏ��㎥��2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1016	1016	/* SP1016:�ʑ��⏞���萔	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1017	1017	/* SP1017:�厲�d�l1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1018	1018	/* SP1018:�厲�d�l2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1019	1019	/* SP1019:�ʒu���o�핪��\�i�厲�[�j	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1020	1020	/* SP1020:���x���o�핪��\�i���[�^�[�j	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1021	1021	/* SP1021:�ߕ��׃A���[�� ���o����	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1022	1022	/* SP1022:�ߕ��׃A���[�� ���o���x��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1023	1023	/* SP1023:�덷�ߑ匟�o���i�ʒu���[�h�j	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1024	1024	/* SP1024:�C���|�W�V������	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1025	1025	/* SP1025:��Q�C���|�W�V������	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1026	1026	/* SP1026:���[�^�ō����x	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1027	1027	/* SP1027:���[�^�둬�x	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1028	1028	/* SP1028:���x���o �Z�b�g�l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1029	1029	/* SP1029:���x���o ���Z�b�g��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1030	1030	/* SP1030:��Q���x���o�Z�b�g�l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1031	1031	/* SP1031:���[�^�^�C�v	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1032	1032	/* SP1032:�p���[�T�v���C�^�C�v	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1033	1033	/* SP1033:�厲�@�\1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1034	1034	/* SP1034:�厲�@�\2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1035	1035	/* SP1035:�厲�@�\3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1036	1036	/* SP1036:�厲�@�\4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1037	1037	/* SP1037:���׃C�i�[�V���{��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1038	1038	/* SP1038:�m�b�`�t�B���^ ���g��1�i76Hz�`�j	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1039	1039	/* SP1039:���X�g���[�V�����␳�^�C�~���O	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1040	1040	/* SP1040:���X�g���[�V�����␳1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1041	1041	/* SP1041:���X�g���[�V�����␳2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1042	1042	/* SP1042:�I�[�o�[�V���[�g�␳1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1043	1043	/* SP1043:�I�[�o�[�V���[�g�␳2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1044	1044	/* SP1044:�O���I�u�U�[�o �t�B���^�[���g��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1045	1045	/* SP1045:�O���I�u�U�[�o �Q�C��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1046	1046	/* SP1046:�m�b�`�t�B���^ ���g��2�i76Hz�`�j	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1047	1047	/* SP1047:�U�N�d���␳�Q�C��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1048	1048	/* SP1048:�d���s���ѕ␳	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1049	1049	/* SP1049:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1050	1050	/* SP1050:�����x�t�B�[�h�t�H���[�h	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1051	1051	/* SP1051:�f���A���t�B�[�h�o�b�N���� ���萔	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1052	1052	/* SP1052:�f���A���t�B�[�h�o�b�N���� �s����	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1053	1053	/* SP1053:�덷�ߑ匟�o���i���x���[�h�j	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1054	1054	/* SP1054:�N���[�Y�h���[�v�ߑ����o��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1055	1055	/* SP1055:����~�ő�x������	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1056	1056	/* SP1056:�������䎞�萔	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1057	1057	/* SP1057:�厲���M�A1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1058	1058	/* SP1058:�厲���M�A2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1059	1059	/* SP1059:�厲���M�A3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1060	1060	/* SP1060:�厲���M�A4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1061	1061	/* SP1061:���[�^���M�A1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1062	1062	/* SP1062:���[�^���M�A2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1063	1063	/* SP1063:���[�^���M�A3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1064	1064	/* SP1064:���[�^���M�A4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1065	1065	/* SP1065:�g���N����1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1066	1066	/* SP1066:�g���N����2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1067	1067	/* SP1067:�g���N����3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1068	1068	/* SP1068:�g���N����4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1069	1069	/* SP1069:�������d���ጸ �����l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1070	1070	/* SP1070:�������d���ጸ �܂�_���x	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1071	1071	/* SP1071:�������d���ጸ �����l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1072	1072	/* SP1072:�������d���ጸ �܂�_���x	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1073	1073	/* SP1073:�ϑ��x�Q�C�� �ڕW�l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1074	1074	/* SP1074:�ϑ��x�Q�C�� �ύX�J�n���x	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1075	1075	/* SP1075:�񐶎����ׂ� ���������␳�{��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1076	1076	/* SP1076:�񐶎����ׂ� �ᑬ�����␳�{��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1077	1077	/* SP1077:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1078	1078	/* SP1078:���x�␳ �@�\�I��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1079	1079	/* SP1079:���x�␳ �����l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1080	1080	/* SP1080:���x�␳ �S���W��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1081	1081	/* SP1081:���x�L�����Z���W��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1082	1082	/* SP1082:�ʑ��⏞���萔�����l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1083	1083	/* SP1083:�ʑ��⏞������	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1084	1084	/* SP1084:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1085	1085	/* SP1085:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1086	1086	/* SP1086:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1087	1087	/* SP1087:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1088	1088	/* SP1088:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1089	1089	/* SP1089:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1090	1090	/* SP1090:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1091	1091	/* SP1091:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1092	1092	/* SP1092:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1093	1093	/* SP1093:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1094	1094	/* SP1094:�����ؑ� �Q�[�g�Ւf�^�C�}	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1095	1095	/* SP1095:�����ؑ� �d�������^�C�}	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1096	1096	/* SP1096:�����ؑ� �d�������l	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1097	1097	/* SP1097:Q���d�� �i�ݕ⏞	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1098	1098	/* SP1098:D���d�� �i�ݕ⏞	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1099	1099	/* SP1099:Q���d�� �Q�C��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1100	1100	/* SP1100:D���d�� �Q�C��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1101	1101	/* SP1101:Q���d�� �i�ݕ⏞(�ᑬ����)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1102	1102	/* SP1102:D���d�� �i�ݕ⏞(�ᑬ����)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1103	1103	/* SP1103:Q���d�� �Q�C��(�ᑬ����)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1104	1104	/* SP1104:D���d�� �Q�C��(�ᑬ����)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1105	1105	/* SP1105:(�������\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1106	1106	/* SP1106:(�������\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1107	1107	/* SP1107:(�������\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1108	1108	/* SP1108:(�������\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1109	1109	/* SP1109:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1110	1110	/* SP1110:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1111	1111	/* SP1111:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1112	1112	/* SP1112:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1113	1113	/* SP1113:�I�[�v�����[�v���d���w�ߒl	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1114	1114	/* SP1114:�I���G���g�p���X�덷�`�F�b�N��	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1115	1115	/* SP1115:�iSPM Z���ʒu���Ƀf�[�^�\��j	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1116	1116	/* SP1116:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1117	1117	/* SP1117:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1118	1118	/* SP1118:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1119	1119	/* SP1119:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1120	1120	/* SP1120:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1121	1121	/* SP1121:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1122	1122	/* SP1122:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1123	1123	/* SP1123:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1124	1124	/* SP1124:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1125	1125	/* SP1125:�c�`�o�̓f�[�^�ԍ� �`�����l��1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1126	1126	/* SP1126:�c�`�o�̓f�[�^�ԍ� �`�����l��2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1127	1127	/* SP1127:�c�`�o�͔{�� �`�����l��1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1128	1128	/* SP1128:�c�`�o�͔{�� �`�����l��2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1129	1129	/* SP1129:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1130	1130	/* SP1130:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1131	1131	/* SP1131:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1132	1132	/* SP1132:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1133	1133	/* SP1133:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1134	1134	/* SP1134:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1135	1135	/* SP1135:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1136	1136	/* SP1136:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1137	1137	/* SP1137:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1138	1138	/* SP1138:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1139	1139	/* SP1139:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1140	1140	/* SP1140:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1141	1141	/* SP1141:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1142	1142	/* SP1142:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1143	1143	/* SP1143:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1144	1144	/* SP1144:�����������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1145	1145	/* SP1145:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1146	1146	/* SP1146:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1147	1147	/* SP1147:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1148	1148	/* SP1148:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1149	1149	/* SP1149:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1150	1150	/* SP1150:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1151	1151	/* SP1151:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1152	1152	/* SP1152:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1153	1153	/* SP1153:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1154	1154	/* SP1154:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1155	1155	/* SP1155:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1156	1156	/* SP1156:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1157	1157	/* SP1157:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1158	1158	/* SP1158:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1159	1159	/* SP1159:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1160	1160	/* SP1160:�����������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1161	1161	/* SP1161:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1162	1162	/* SP1162:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1163	1163	/* SP1163:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1164	1164	/* SP1164:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1165	1165	/* SP1165:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1166	1166	/* SP1166:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1167	1167	/* SP1167:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1168	1168	/* SP1168:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1169	1169	/* SP1169:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1170	1170	/* SP1170:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1171	1171	/* SP1171:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1172	1172	/* SP1172:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1173	1173	/* SP1173:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1174	1174	/* SP1174:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1175	1175	/* SP1175:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1176	1176	/* SP1176:�ᑬ�������[�^�萔1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1177	1177	/* SP1177:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1178	1178	/* SP1178:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1179	1179	/* SP1179:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1180	1180	/* SP1180:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1181	1181	/* SP1181:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1182	1182	/* SP1182:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1183	1183	/* SP1183:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1184	1184	/* SP1184:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1185	1185	/* SP1185:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1186	1186	/* SP1186:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1187	1187	/* SP1187:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1188	1188	/* SP1188:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1189	1189	/* SP1189:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1190	1190	/* SP1190:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1191	1191	/* SP1191:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1192	1192	/* SP1192:�ᑬ�������[�^�萔2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1193	1193	/* SP1193:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1194	1194	/* SP1194:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1195	1195	/* SP1195:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1196	1196	/* SP1196:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1197	1197	/* SP1197:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1198	1198	/* SP1198:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1199	1199	/* SP1199:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1200	1200	/* SP1200:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1201	1201	/* SP1201:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1202	1202	/* SP1202:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1203	1203	/* SP1203:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1204	1204	/* SP1204:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1205	1205	/* SP1205:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1206	1206	/* SP1206:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1207	1207	/* SP1207:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1208	1208	/* SP1208:�����������[�^�萔1(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1209	1209	/* SP1209:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1210	1210	/* SP1210:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1211	1211	/* SP1211:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1212	1212	/* SP1212:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1213	1213	/* SP1213:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1214	1214	/* SP1214:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1215	1215	/* SP1215:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1216	1216	/* SP1216:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1217	1217	/* SP1217:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1218	1218	/* SP1218:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1219	1219	/* SP1219:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1220	1220	/* SP1220:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1221	1221	/* SP1221:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1222	1222	/* SP1222:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1223	1223	/* SP1223:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1224	1224	/* SP1224:�����������[�^�萔2(�\��)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1225	1225	/* SP1225:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1226	1226	/* SP1226:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1227	1227	/* SP1227:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1228	1228	/* SP1228:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1229	1229	/* SP1229:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1230	1230	/* SP1230:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1231	1231	/* SP1231:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1232	1232	/* SP1232:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1233	1233	/* SP1233:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1234	1234	/* SP1234:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1235	1235	/* SP1235:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1236	1236	/* SP1236:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1237	1237	/* SP1237:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1238	1238	/* SP1238:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1239	1239	/* SP1239:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1240	1240	/* SP1240:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1241	1241	/* SP1241:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1242	1242	/* SP1242:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1243	1243	/* SP1243:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1244	1244	/* SP1244:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1245	1245	/* SP1245:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1246	1246	/* SP1246:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1247	1247	/* SP1247:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1248	1248	/* SP1248:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1249	1249	/* SP1249:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1250	1250	/* SP1250:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1251	1251	/* SP1251:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1252	1252	/* SP1252:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1253	1253	/* SP1253:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1254	1254	/* SP1254:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1255	1255	/* SP1255:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1256	1256	/* SP1256:���[�U����J�̈�	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1257	1257	/* SP1257:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1258	1258	/* SP1258:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1259	1259	/* SP1259:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1260	1260	/* SP1260:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1261	1261	/* SP1261:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1262	1262	/* SP1262:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1263	1263	/* SP1263:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1264	1264	/* SP1264:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1265	1265	/* SP1265:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1266	1266	/* SP1266:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1267	1267	/* SP1267:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1268	1268	/* SP1268:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1269	1269	/* SP1269:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1270	1270	/* SP1270:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1271	1271	/* SP1271:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1272	1272	/* SP1272:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1273	1273	/* SP1273:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1274	1274	/* SP1274:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1275	1275	/* SP1275:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1276	1276	/* SP1276:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1277	1277	/* SP1277:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1278	1278	/* SP1278:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1279	1279	/* SP1279:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1280	1280	/* SP1280:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1281	1281	/* SP1281:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1282	1282	/* SP1282:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1283	1283	/* SP1283:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1284	1284	/* SP1284:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1285	1285	/* SP1285:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1286	1286	/* SP1286:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1287	1287	/* SP1287:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1288	1288	/* SP1288:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1289	1289	/* SP1289:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1290	1290	/* SP1290:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1291	1291	/* SP1291:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1292	1292	/* SP1292:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1293	1293	/* SP1293:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1294	1294	/* SP1294:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1295	1295	/* SP1295:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1296	1296	/* SP1296:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1297	1297	/* SP1297:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1298	1298	/* SP1298:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1299	1299	/* SP1299:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1300	1300	/* SP1300:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1301	1301	/* SP1301:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1302	1302	/* SP1302:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1303	1303	/* SP1303:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1304	1304	/* SP1304:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1305	1305	/* SP1305:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1306	1306	/* SP1306:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1307	1307	/* SP1307:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1308	1308	/* SP1308:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1309	1309	/* SP1309:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1310	1310	/* SP1310:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1311	1311	/* SP1311:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1312	1312	/* SP1312:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1313	1313	/* SP1313:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1314	1314	/* SP1314:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1315	1315	/* SP1315:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1316	1316	/* SP1316:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1317	1317	/* SP1317:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1318	1318	/* SP1318:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1319	1319	/* SP1319:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1320	1320	/* SP1320:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1321	1321	/* SP1321:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1322	1322	/* SP1322:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1323	1323	/* SP1323:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1324	1324	/* SP1324:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1325	1325	/* SP1325:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1326	1326	/* SP1326:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1327	1327	/* SP1327:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1328	1328	/* SP1328:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1329	1329	/* SP1329:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1330	1330	/* SP1330:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1331	1331	/* SP1331:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1332	1332	/* SP1332:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1333	1333	/* SP1333:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1334	1334	/* SP1334:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1335	1335	/* SP1335:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1336	1336	/* SP1336:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1337	1337	/* SP1337:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1338	1338	/* SP1338:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1339	1339	/* SP1339:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1340	1340	/* SP1340:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1341	1341	/* SP1341:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1342	1342	/* SP1342:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1343	1343	/* SP1343:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1344	1344	/* SP1344:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1345	1345	/* SP1345:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1346	1346	/* SP1346:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1347	1347	/* SP1347:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1348	1348	/* SP1348:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1349	1349	/* SP1349:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1350	1350	/* SP1350:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1351	1351	/* SP1351:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1352	1352	/* SP1352:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1353	1353	/* SP1353:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1354	1354	/* SP1354:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1355	1355	/* SP1355:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1356	1356	/* SP1356:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1357	1357	/* SP1357:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1358	1358	/* SP1358:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1359	1359	/* SP1359:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1360	1360	/* SP1360:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1361	1361	/* SP1361:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1362	1362	/* SP1362:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1363	1363	/* SP1363:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1364	1364	/* SP1364:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1365	1365	/* SP1365:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1366	1366	/* SP1366:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1367	1367	/* SP1367:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1368	1368	/* SP1368:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1369	1369	/* SP1369:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1370	1370	/* SP1370:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1371	1371	/* SP1371:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1372	1372	/* SP1372:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1373	1373	/* SP1373:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1374	1374	/* SP1374:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1375	1375	/* SP1375:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1376	1376	/* SP1376:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1377	1377	/* SP1377:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1378	1378	/* SP1378:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1379	1379	/* SP1379:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1380	1380	/* SP1380:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1381	1381	/* SP1381:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1382	1382	/* SP1382:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1383	1383	/* SP1383:���g�p	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1384	1384	/* SP1384:���g�p	*//* P1X-A091A */

/* �厲�^�T�[�{�p�����[�^	*/

/* �⏕���E���p�����[�^	*/
#define	M_SSEC_MPRMAUX_MSR	1	/* ���[�^�V���[�Y	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_RTY	2	/* �񐶃I�v�V�����^�C�v	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PC1	3	/* ���[�^���M����i�@�B��]��j	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PC2	4	/* ���[�^���M����i���[�^��]��j	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PIT	5	/* ����s�b�`	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_INP	6	/* �C���|�W�V�������o��	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ATU	7	/* �I�[�g�`���[�j���O	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PG1	8	/* �ʒu���[�v�Q�C���h	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV009	9	/* (sv009)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_EMG	10	/* �������䎞�萔	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV011	11	/* (sv011)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV015	12	/* (sv015)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MBR	13	/* �㉺�������h�~����	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NCH	14	/* �m�b�`�t�B���^�ԍ�	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KEG	15	/* (KEG)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JIT	16	/* �W�b�^�␳	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MV1	17	/* (MV1)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MV2	18	/* (MV2)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PG2	19	/* �ʒu���[�v�Q�C���Q	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VG1	20	/* ���x���[�v�Q�C���P	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VG2	21	/* ���x���[�v�Q�C���P	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VIS	22	/* ���x�ϕ��⏞	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VDC	23	/* ���x�����⏞	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_DG2	24	/* ���׃C�i�[�V����	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV028	25	/* (sv028)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MTY	30	/* ���[�^�^�C�v	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TMK	31	/* (TMK)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PMS	32	/* (PMS)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_BAS	33	/* (BAS)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MAX	34	/* (MAX)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_AMR	35	/* (AMR)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JMK	36	/* (JMK)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KCM	37	/* (KCM)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KVI	38	/* (KVI)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VGM	39	/* (VGM)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MLD	40	/* (MLD)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KEC	41	/* (KEC)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IQG	42	/* (IQG)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IDG	43	/* (IDG)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IQI	44	/* (IQI)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IDI	45	/* (IDI)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MD1	50	/* �c�^�`�o�̓`�����l��1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MO1	51	/* �c�^�`�o�̓`�����l��1�@�o�̓I�t�Z�b�g	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MG1	52	/* (MG1)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MD2	53	/* �c�^�`�o�̓`�����l��2�@�f�[�^�ԍ�	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MO2	54	/* �c�^�`�o�̓`�����l��2�@�o�̓I�t�Z�b�g	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MG2	55	/* (MG2)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STY02	56	/* (STY02)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STATION	100	/* ���o�X�e�[�V������	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_CONT1	101	/* ����p�����[�^1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_CONT2	102	/* ����p�����[�^2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_EMGCONT	103	/* ����~����	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TLENG	104	/* �������X�g���[�N��	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_AXIS_NAM	105	/* ����	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ZRNSPEED	110	/* ���t�@�����X�_���A���x	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ZRNCREEP	111	/* ���t�@�����X�_���A�N���[�v���x	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_GRIDMASK	112	/* �O���b�h�}�X�N��	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_GRSPC	113	/* �O���b�h�Ԋu	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ZRNSHIFT	114	/* ���t�@�����X�_�V�t�g��	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOFSET	115	/* �X�e�[�V�����I�t�Z�b�g	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ABSBASE	116	/* ��Έʒu���_	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_LIMIT_HIGH	117	/* �\�t�g���~�b�g�i+�j	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_LIMIT_LOW	118	/* �\�t�g���~�b�g�i-�j	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ABSTYPE	120	/* ��Έʒu���o�p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ABSCHECK	123	/* ��Έʒu�d���f�ړ����e�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_BACKLASH	130	/* �o�b�N���b�V�␳��	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI16A	132	/* (YOB16A)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI16B	133	/* (YOB16B)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI32A	134	/* (YOBI32A)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI32B	135	/* (YOBI32B)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED1	150	/* ����p�����[�^�Q�P�@�����^�]���x	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED1	151	/* ����p�����[�^�Q�P�@�蓮�^�]���x	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL1	152	/* ����p�����[�^�Q�P�@���������萔�P	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL2	153	/* ����p�����[�^�Q�P�@���������萔2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL1	154	/* ����p�����[�^�Q�P�@�g���N�����l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD1	155	/* ����p�����[�^�Q�P�@�덷�ߑ匟�o��	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST1	156	/* ����p�����[�^�Q�P�@��ʒu�o�͕�	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR1	157	/* ����p�����[�^�Q�P�@��ʒu�ߖT�o�͕�	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED2	158	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED2	159	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL2_1	160	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL2_2	161	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL2	162	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD2	163	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST2	164	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR2	165	/* ����p�����[�^�Q�Q�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED3	166	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED3	167	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL3_1	168	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL3_2	169	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL3	170	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD3	171	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST3	172	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR3	173	/* ����p�����[�^�Q�R�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED4	174	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED4	175	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL4_1	176	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL4_2	177	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL4	178	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD4	179	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST4	180	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR4	181	/* ����p�����[�^�Q�S�̃p�����[�^	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS1	190	/* �X�e�[�V�����Q���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS2	191	/* �X�e�[�V�����R���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS3	192	/* �X�e�[�V�����S���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS4	193	/* �X�e�[�V�����T���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS5	194	/* �X�e�[�V�����U���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS6	195	/* �X�e�[�V�����V���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS7	196	/* �X�e�[�V�����W���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS8	197	/* �X�e�[�V�����X���W�l	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSWCHECK	200	/* �o�r�v�@���o����	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW1DOG1	201	/* �o�r�v1�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW1DOG2	202	/* �o�r�v1�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW2DOG1	203	/* �o�r�v2�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW2DOG2	204	/* �o�r�v2�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW3DOG1	205	/* �o�r�v3�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW3DOG2	206	/* �o�r�v3�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW4DOG1	207	/* �o�r�v4�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW4DOG2	208	/* �o�r�v4�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW5DOG1	209	/* �o�r�v5�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW5DOG2	210	/* �o�r�v5�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW6DOG1	211	/* �o�r�v6�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW6DOG2	212	/* �o�r�v6�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW7DOG1	213	/* �o�r�v7�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW7DOG2	214	/* �o�r�v7�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW8DOG1	215	/* �o�r�v8�@�̈�ݒ�1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW8DOG2	216	/* �o�r�v8�@�̈�ݒ�2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT	220	/* �������ė�	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT1	221	/* �������đҋ@����	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT2	222	/* �������ăg���N�J������	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT3	223	/* ��ʒu�M���o�͒x������	*//* P1X-A087 */

/* ��Έʒu�p�����[�^/PLC����Έʒu�p�����[�^	*/
#define	M_SSEC_MPABSP_ABSTYPM	1	/* ��Έʒu���o����	*/
#define	M_SSEC_MPABSP_ABSTYP	2	/* �Z-����	*/
#define	M_SSEC_MPABSP_ABSLMT	3	/* �`�F�b�N	*/
#define	M_SSEC_MPABSP_ABSG28	4	/* G28�ƍ���	*/
#define	M_SSEC_MPABSP_ABSM02	5	/* M02�ƍ���	*/
#define	M_SSEC_MPABSP_CLPUSH	6	/* �d������(%)	*/
#define	M_SSEC_MPABSP_PUSHF	7	/* �����đ��x	*/
#define	M_SSEC_MPABSP_APPROCH	8	/* �A�v���[�`	*/
#define	M_SSEC_MPABSP_NREFP	9	/* ���_�t��+	*/
#define	M_SSEC_MPABSP_NREFN	10	/* ���_�t��-	*/
#define	M_SSEC_MPABSP_ABSZRBA	11	/* ���_�p�����[�^��_�I��	*/
#define	M_SSEC_MPABSP_MLIMIT1BL	12	/* �\�t�g���~�b�gIB-	*/
#define	M_SSEC_MPABSP_MLIMIT1BU	13	/* �\�t�g���~�b�gIB+	*/
#define	M_SSEC_MPABSP_MOT1TYPE	14	/* �\�t�g���~�b�gIB�^�C�v	*/

/* �@�B�덷�␳�p�����[�^	*/
#define	M_SSEC_MPMER_PINC	1	/* �␳�@�B�덷�␳�ʑ����ʕ���	*/
#define	M_SSEC_MPMER_CMPASC(x)	(1 + (x))	/* ��1�`28����{��(1�`28)	*/
#define	M_SSEC_MPMER_DRCASC(x)	(29 + (x))	/* ��1�`28���␳��(1�`28)	*/
#define	M_SSEC_MPMER_RDIVNOMS(x)	(57 + (x))	/* ��1�`28�����t�@�����X�_�ʒu�����_�ԍ�(1�`28)	*/
#define	M_SSEC_MPMER_MDIVNOMS(x)	(85 + (x))	/* ��1�`28���ł��}�C�i�X�ʒu�̕����_�ԍ�(1�`28)	*/
#define	M_SSEC_MPMER_PDIVNOMS(x)	(113 + (x))	/* ��1�`28���ł��v���X�ʒu�̕����_�ԍ�(1�`28)	*/
#define	M_SSEC_MPMER_SCL(x)	(141 + (x))	/* ��1�`28���␳�{��(1�`28)	*/
#define	M_SSEC_MPMER_SPCDIV(x)	(169 + (x))	/* ��1�`28�������Ԋu(1�`28)	*/
#define	M_SSEC_MPMER_PCMP(x)	(198 + (x))	/* �s�b�`�G���[�␳��(0�`1023)	*/
#define	M_SSEC_MPMER_TWOPC(x)	(1221+(x))	/* ��1�`28�� �o�����s�b�`�덷�␳(1�`28)	*//* P1X-A341 */
#define	M_SSEC_MPMER_REFRV(x)	(1249+(x))	/* ��1�`28�� ���t�@�����X�_�␳��(1�`28)	*//* P1X-A341 */

/* �@�B�덷�␳�f�[�^	*/

/* �|�W�V�����X�C�b�`	*/
#define	M_SSEC_MPPOSW_CKPSW	1	/* PSW�؊�	*/
#define	M_SSEC_MPPOSW_PSW1_PAXNAM	2	/* ��1�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW1_DOG1	3	/* ��1�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW1_DOG2	4	/* ��1�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW1_CKTYP	5	/* ��1�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW2_PAXNAM	6	/* ��2�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW2_DOG1	7	/* ��2�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW2_DOG2	8	/* ��2�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW2_CKTYP	9	/* ��2�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW3_PAXNAM	10	/* ��3�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW3_DOG1	11	/* ��3�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW3_DOG2	12	/* ��3�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW3_CKTYP	13	/* ��3�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW4_PAXNAM	14	/* ��4�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW4_DOG1	15	/* ��4�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW4_DOG2	16	/* ��4�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW4_CKTYP	17	/* ��4�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW5_PAXNAM	18	/* ��5�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW5_DOG1	19	/* ��5�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW5_DOG2	20	/* ��5�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW5_CKTYP	21	/* ��5�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW6_PAXNAM	22	/* ��6�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW6_DOG1	23	/* ��6�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW6_DOG2	24	/* ��6�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW6_CKTYP	25	/* ��6�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW7_PAXNAM	26	/* ��7�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW7_DOG1	27	/* ��7�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW7_DOG2	28	/* ��7�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW7_CKTYP	29	/* ��7�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW8_PAXNAM	30	/* ��8�|�W�V�����X�C�b�`������	*/
#define	M_SSEC_MPPOSW_PSW8_DOG1	31	/* ��8�|�W�V�����X�C�b�`���z�h�O�ʒu1	*/
#define	M_SSEC_MPPOSW_PSW8_DOG2	32	/* ��8�|�W�V�����X�C�b�`���z�h�O�ʒu2	*/
#define	M_SSEC_MPPOSW_PSW8_CKTYP	33	/* ��8�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���	*/
#define	M_SSEC_MPPOSW_PSW_EX_NAME(x)	(100 + (x))	/* ��9�`24�|�W�V�����X�C�b�`������(x=9�`)	*//* P1X-A020 */
#define	M_SSEC_MPPOSW_PSW_EX_DOG1(x)	(200 + (x))	/* ��9�`24�|�W�V�����X�C�b�`���z�h�O�ʒu1(x=9�`)	*//* P1X-A020 */
#define	M_SSEC_MPPOSW_PSW_EX_DOG2(x)	(300 + (x))	/* ��9�`24�|�W�V�����X�C�b�`���z�h�O�ʒu2(x=9�`)	*//* P1X-A020 */
#define	M_SSEC_MPPOSW_PSW_EX_CHCK(x)	(400 + (x))	/* ��9�`24�|�W�V�����X�C�b�`PSW�`�F�b�N�����؊���(x=9�`)	*//* P1X-A020 */

/* �A�i���O���o�̓p��	*/

/* �}�N���ꗗ	*/
#define	M_SSEC_MPLMAC_M01_TMCODE	1	/* M[01]�R�[�h	*/
#define	M_SSEC_MPLMAC_M01_TMMACROT	2	/* M[01]�^�C�v	*/
#define	M_SSEC_MPLMAC_M01_TMMACRO	3	/* M[01]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M02_TMCODE	4	/* M[02]�R�[�h	*/
#define	M_SSEC_MPLMAC_M02_TMMACROT	5	/* M[02]�^�C�v	*/
#define	M_SSEC_MPLMAC_M02_TMMACRO	6	/* M[02]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M03_TMCODE	7	/* M[03]�R�[�h	*/
#define	M_SSEC_MPLMAC_M03_TMMACROT	8	/* M[03]�^�C�v	*/
#define	M_SSEC_MPLMAC_M03_TMMACRO	9	/* M[03]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M04_TMCODE	10	/* M[04]�R�[�h	*/
#define	M_SSEC_MPLMAC_M04_TMMACROT	11	/* M[04]�^�C�v	*/
#define	M_SSEC_MPLMAC_M04_TMMACRO	12	/* M[04]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M05_TMCODE	13	/* M[05]�R�[�h	*/
#define	M_SSEC_MPLMAC_M05_TMMACROT	14	/* M[05]�^�C�v	*/
#define	M_SSEC_MPLMAC_M05_TMMACRO	15	/* M[05]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M06_TMCODE	16	/* M[06]�R�[�h	*/
#define	M_SSEC_MPLMAC_M06_TMMACROT	17	/* M[06]�^�C�v	*/
#define	M_SSEC_MPLMAC_M06_TMMACRO	18	/* M[06]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M07_TMCODE	19	/* M[07]�R�[�h	*/
#define	M_SSEC_MPLMAC_M07_TMMACROT	20	/* M[07]�^�C�v	*/
#define	M_SSEC_MPLMAC_M07_TMMACRO	21	/* M[07]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M08_TMCODE	22	/* M[08]�R�[�h	*/
#define	M_SSEC_MPLMAC_M08_TMMACROT	23	/* M[08]�^�C�v	*/
#define	M_SSEC_MPLMAC_M08_TMMACRO	24	/* M[08]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M09_TMCODE	25	/* M[09]�R�[�h	*/
#define	M_SSEC_MPLMAC_M09_TMMACROT	26	/* M[09]�^�C�v	*/
#define	M_SSEC_MPLMAC_M09_TMMACRO	27	/* M[09]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_M10_TMCODE	28	/* M[10]�R�[�h	*/
#define	M_SSEC_MPLMAC_M10_TMMACROT	29	/* M[10]�^�C�v	*/
#define	M_SSEC_MPLMAC_M10_TMMACRO	30	/* M[10]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_TBMACROT	31	/* M2mac�^�C�v	*/
#define	M_SSEC_MPLMAC_TBMACRO	32	/* M2mac�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G01_TGCODE	33	/* G[01]�R�[�h	*/
#define	M_SSEC_MPLMAC_G01_TGMACROT	34	/* G[01]�^�C�v	*/
#define	M_SSEC_MPLMAC_G01_TGMACRO	35	/* G[01]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G02_TGCODE	36	/* G[02]�R�[�h	*/
#define	M_SSEC_MPLMAC_G02_TGMACROT	37	/* G[02]�^�C�v	*/
#define	M_SSEC_MPLMAC_G02_TGMACRO	38	/* G[02]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G03_TGCODE	39	/* G[03]�R�[�h	*/
#define	M_SSEC_MPLMAC_G03_TGMACROT	40	/* G[03]�^�C�v	*/
#define	M_SSEC_MPLMAC_G03_TGMACRO	41	/* G[03]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G04_TGCODE	42	/* G[04]�R�[�h	*/
#define	M_SSEC_MPLMAC_G04_TGMACROT	43	/* G[04]�^�C�v	*/
#define	M_SSEC_MPLMAC_G04_TGMACRO	44	/* G[04]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G05_TGCODE	45	/* G[05]�R�[�h	*/
#define	M_SSEC_MPLMAC_G05_TGMACROT	46	/* G[05]�^�C�v	*/
#define	M_SSEC_MPLMAC_G05_TGMACRO	47	/* G[05]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G06_TGCODE	48	/* G[06]�R�[�h	*/
#define	M_SSEC_MPLMAC_G06_TGMACROT	49	/* G[06]�^�C�v	*/
#define	M_SSEC_MPLMAC_G06_TGMACRO	50	/* G[06]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G07_TGCODE	51	/* G[07]�R�[�h	*/
#define	M_SSEC_MPLMAC_G07_TGMACROT	52	/* G[07]�^�C�v	*/
#define	M_SSEC_MPLMAC_G07_TGMACRO	53	/* G[07]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G08_TGCODE	54	/* G[08]�R�[�h	*/
#define	M_SSEC_MPLMAC_G08_TGMACROT	55	/* G[08]�^�C�v	*/
#define	M_SSEC_MPLMAC_G08_TGMACRO	56	/* G[08]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G09_TGCODE	57	/* G[09]�R�[�h	*/
#define	M_SSEC_MPLMAC_G09_TGMACROT	58	/* G[09]�^�C�v	*/
#define	M_SSEC_MPLMAC_G09_TGMACRO	59	/* G[09]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_G10_TGCODE	60	/* G[10]�R�[�h	*/
#define	M_SSEC_MPLMAC_G10_TGMACROT	61	/* G[10]�^�C�v	*/
#define	M_SSEC_MPLMAC_G10_TGMACRO	62	/* G[10]�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_TSMACROT	63	/* Smac�^�C�v	*/
#define	M_SSEC_MPLMAC_TSMACRO	64	/* Smac�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_TTMACROT	65	/* Tmac�^�C�v	*/
#define	M_SSEC_MPLMAC_TTMACRO	66	/* Tmac�v���O�����ԍ�	*/
#define	M_SSEC_MPLMAC_ASC_MACSET(x)	(100+(x))	/* ASCII[]ASCII�R�[�h�}�N���L�� (x=1�`2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_CODE(x)	(200+(x))	/* ASCII[]ASCII�R�[�h (x=1�`2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_TYPE(x)	(300+(x))	/* ASCII[]�ďo�^�C�v(0:M98,1:G65,2:G66,3:G66.1) (x=1�`2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_PROGNO(x)	(400+(x))	/* ASCII[]�v���O����No. (x=1�`2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_COM_VAL(x)	(500+(x))	/* ASCII[]�R�����ϐ��ԍ�(100�`149) (x=1�`2)	*//* P0Y-A013F */

/* PLC�萔	*/
#define	M_SSEC_MP_PLC_CONST(x)	(1 + (x))	/* PLC�萔(x=0�`95 / [M7] x=0�`899)	*/

/* PLC�^�C�}	*/
#define	M_SSEC_MP_PLC_TIMER10(x)	(1 + (x))	/* 10ms�^�C�}<10ms>    (x=0�`15 / [M7] x=0�`703)	*/
#define	M_SSEC_MP_PLC_TIMER100(x)	(1000 + (x))	/* 100ms�^�C�}<100ms> (x=0�`79 / [M7] x=0�`703)	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_TIMER100INC(x)	(2000 + (x))	/* 100ms�ώZ�^�C�}<100msINC>(x=0�`7     / [M7] x=0�`63)	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_EX_TIMER10(x)	(3000 + (x))	/* 10ms���Z�g���^�C�}<10ms>  (x=0�`399 / [M7]�Ȃ�)	*//* P0Y-A013F P1X-A030 */
#define	M_SSEC_MP_PLC_TIMER_NOS	10000	/* PLC�^�C�}(��)��       �iM7�̂݁j	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_TIMERINC_NOS	10001	/* PLC�ώZ�^�C�}(��)���iM7�̂݁j	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_TIMER_STS(x)	(11000 + (x))	/* PLC�^�C�}�f�o�C�X�g�p��ԁix=0�`703�j	*//* P1X-A006p */
#define	M_SSEC_MP_PLC_TIMER_INC_STS(x)	(13000 + (x))	/* PLC�ώZ�^�C�}�f�o�C�X�g�p��ԁix=0�`63�j	*//* P1X-A006p */

/* PLC�J�E���^	*/
#define	M_SSEC_MP_PLC_COUNTER(x)	(1 + (x))	/* �J�E���^(x=0�`23 / [M7] x=0�`255)	*/
#define	M_SSEC_MP_PLC_COUNTER_NOS	10000	/* PLC�J�E���^�i�ρj�̌��iM7�̂݁j	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_COUNTER_STS(x)	(11000 + (x))	/* PLC�J�E���^�f�o�C�X�g�p��ԁix=0�`256�j	*//* P1X-A006p */

/* �r�b�g�I��	*/
#define	M_SSEC_MP_SELECT_BIT(x)	(1 + (x))	/* �r�b�g�I��(x=0�`195)	*//* P1X-B467 */

/* �J���p�����[�^1(long)	*/
#define	M_SSEC_MPOPN_1_VALUE(x)	(x)	/* �J���p�����[�^�l 1(long) (x=1�`896)	*//* P1X-A167A */

/* �J���p�����[�^2(double)	*/
#define	M_SSEC_MPOPN_2_VALUE(x)	(x)	/* �J���p�����[�^�l 2(double) (x=1�`96)	*//* P1X-A167A */

/* �@�B�p���J��I/F	*/

/* �̏�f�f�p�����[�^	*/

/* ���H���䋤�ʃp�����[�^	*/

/* ���H���䎲�p�����[�^	*/

/* ���H����M�A�i�p�����[�^	*/

/* ���S�l�b�g1	*/
#define	M_SSEC_MPANET1_CALLBACK_NUM1	400	/* �ʒm��d�b�ԍ�1	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_COM1	401	/* �R�����g1	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_NUM2	402	/* �ʒm��d�b�ԍ�2	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_COM2	403	/* �R�����g2	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_NUM3	404	/* �ʒm��d�b�ԍ�3	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_COM3	405	/* �R�����g3	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_ENABLE_ANET	406	/* ���S�l�b�g�L��	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_ENABLE_KNET	407	/* �H�@�l�b�g�L��	*//* P1X-A257 */
#define	M_SSEC_MPANET1_PASSWD	807	/* ���H�f�[�^���L�@�p�X���[�h	*//* P1X-A121F */
#define	M_SSEC_MPANET1_CUSTOMER_NUM	808	/* ���H�f�[�^���L�@���q�l�ԍ�	*//* P1X-A121F */
#define	M_SSEC_MPANET1_NOTICE_COND	814	/* �I�y���[�^�ʒm����	*//* P1X-A436 */
#define	M_SSEC_MPANET1_NOTICE_MODE	815	/* �I�y���[�^�ʒm���[�h	*//* P1X-A436 */

/* ���S�l�b�g2	*/
#define	M_SSEC_MPANET2_MODEM_NUM	600	/* ���f���̓d�b�ԍ�	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_CALL_NUM	601	/* �R�[���Z���^�[�ւ̔��M�ԍ�	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_KOUKI_NUM	602	/* �H�@���[�J�ւ̔��M�ԍ�	*//* P1X-A006e */
#define	M_SSEC_MPANET2_ARV_CALL_NUM1	603	/* �R�[���Z���^�[�̒��M�ԍ�1	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM2	604	/* �R�[���Z���^�[�̒��M�ԍ�2	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM3	605	/* �R�[���Z���^�[�̒��M�ԍ�3	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM4	606	/* �R�[���Z���^�[�̒��M�ԍ�4	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM5	607	/* �R�[���Z���^�[�̒��M�ԍ�5	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_KOUKI_NUM(x)	(607+(x))	/* �H�@���[�J�̒��M�ԍ� (x=1�`5)	*//* P1X-A006e */
#define	M_SSEC_MPANET2_RETRY	613	/* ���g���C��	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ENABLE_ANET	614	/* ���S�l�b�g��ʎ����I��	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND1	615	/* ����1(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM1	616	/* ����1(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND2	617	/* ����2(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM2	618	/* ����2(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND3	619	/* ����3(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM3	620	/* ����3(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND4	621	/* ����4(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM4	622	/* ����4(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND5	623	/* ����5(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM5	624	/* ����5(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND6	625	/* ����6(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM6	626	/* ����6(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND7	627	/* ����7(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM7	628	/* ����7(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND8	629	/* ����8(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM8	630	/* ����8(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND9	631	/* ����9(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM9	632	/* ����9(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND10	633	/* ����10(���/���W�X�^)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM10	634	/* ����10(�ԍ�/��Ԓl)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_CMD_TIMEOUT	635	/* �R�}���h�^�C���A�E�g����	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_INT_REDIAL	636	/* ���_�C�����Ԋu(s)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_FRQ_REDIAL	637	/* ���_�C������	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_MODEM_PORT	638	/* ���f���ڑ��|�[�g	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_DIAL_MODEM	639	/* �_�C�������@	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_CALLBACK_WAIT	640	/* �Ăяo���҂�����	*//* P1X-A006e */
#define	M_SSEC_MPANET2_MACHINE_NO	641	/* �@�B����	*//* P1X-A006e */
#define	M_SSEC_MPANET2_FINNC_REG	971	/* ���H���������i���W�X�^�j	*//* P1X-A436 */
#define	M_SSEC_MPANET2_FINNC_REGVAL	972	/* ���H���������i��Ԓl�j	*//* P1X-A436 */

/* PLC�X�C�b�`	*/
#define	M_SSEC_UP_PLC_SWITCH_X(x)	(0 + (x))	/* PLC�X�C�b�`X(IN) (x=1�`64)	*/
#define	M_SSEC_UP_PLC_SWITCH_Y(x)	(100 + (x))	/* PLC�X�C�b�`Y(OUT) (x=1�`64)	*/
#define	M_SSEC_UP_PLCSW_IN0	200	/* PLC�X�C�b�`X(IN)1�`16	*//* P0Y-A013B */
#define	M_SSEC_UP_PLCSW_IN1	201	/* PLC�X�C�b�`X(IN)17�`32	*//* P0Y-A013B */
#define	M_SSEC_UP_PLCSW_IN2	202	/* PLC�X�C�b�`X(IN)33�`48	*//* P1X-A383 */
#define	M_SSEC_UP_PLCSW_IN3	203	/* PLC�X�C�b�`X(IN)49�`64	*//* P1X-A383 */
#define	M_SSEC_UP_PLCSW_OUT0	210	/* PLC�X�C�b�`Y(OUT)1�`16	*//* P1X-A006M */
#define	M_SSEC_UP_PLCSW_OUT1	211	/* PLC�X�C�b�`Y(OUT)17�`32	*//* P1X-A006M */
#define	M_SSEC_UP_PLCSW_OUT2	212	/* PLC�X�C�b�`Y(OUT)33�`48	*//* P1X-A383 */
#define	M_SSEC_UP_PLCSW_OUT3	213	/* PLC�X�C�b�`Y(OUT)49�`64	*//* P1X-A383 */

/* ����p�����[�^	*/
#define	M_SSEC_UPOPE_COUNT_KIND(x)	(8900+(x))	/* �J�E���^���1�`6 (x=1�`6)	*//* P1X-A006c */
#define	M_SSEC_UPOPE_AUT_MANU_SW	8909	/* ����/�蓮�\���ؑ�	*//* P1X-A006BF */
#define	M_SSEC_UPOPE_EDIT_UNDO	8910	/* �ҏWUndo�L��	*//* P1X-A006c */
#define	M_SSEC_UPOPE_TP_SENSITIVITY	8913	/* �^�b�`�p�l�����x����	*//* P1X-A305C */
#define	M_SSEC_UPOPE_TOPSEARCH_AUTO	8914	/* �����g�b�v�T�[�`	*//* P1X-A079A */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY1	8915	/* �����o�b�N�A�b�v�w���1	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY2	8916	/* �����o�b�N�A�b�v�w���2	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY3	8917	/* �����o�b�N�A�b�v�w���3	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY4	8918	/* �����o�b�N�A�b�v�w���4	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DEV	8919	/* �����o�b�N�A�b�v���u	*//* P1X-A088B */
#define	M_SSEC_UPOPE_3D_TOFS_SELECT	8920	/* �\���b�h�`��H��␳�I��	*//* P1X-A006c */
#define	M_SSEC_UPOPE_MASS_EDIT_SELECT	8921	/* ��e�ʕҏW�I��	*//* P1X-A020Y */
#define	M_SSEC_UPOPE_TREG_REPEAT_INVALID	8922	/* T�o�^-�d���`�F�b�N����	*//* P1X-A115C */
#define	M_SSEC_UPOPE_HIDE_EDIT_IO_MENU	8923	/* �ҏW-���o�̓��j���[��	*//* P1X-A020AL */
#define	M_SSEC_UPOPE_MEAS_CONFIRM_MSG	8924	/* �v��-�m�F���b�Z�[�W�L	*//* P1X-A020AP */
#define	M_SSEC_UPOPE_SYS1_SPNO	8925	/* �n��1 �\���厲No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_SYS2_SPNO	8926	/* �n��2 �\���厲No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_SYS3_SPNO	8927	/* �n��3 �\���厲No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_SYS4_SPNO	8928	/* �n��4 �\���厲No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_OFS_ABSINPUT	8929	/* �����̓��j���[����:�␳	*//* P1X-A020AW */
#define	M_SSEC_UPOPE_VAR_ABSINPUT	8930	/* �����̓��j���[����:�ϐ�	*//* P1X-A020AW */
#define	M_SSEC_UPOPE_DIS_SET_LIMIT	8931	/* ���u�\��/�ݒ葀�쐧��	*//* P1X-A020AX */
#define	M_SSEC_UPOPE_HIDE_MEAS_SCRN	8932	/* �v����ʔ�\��	*//* P1X-A020BA */
#define	M_SSEC_UPOPE_TOOLOFS_INPUT	8933	/* �`��␳�ʐݒ�֎~	*//* P1X-A020AZ */
#define	M_SSEC_UPOPE_WEAROFS_INPUT	8934	/* ���Օ␳�ʐݒ�֎~	*//* P1X-A020AZ */
#define	M_SSEC_UPOPE_WOFS_CONFIRM	8935	/* W���W-�m�F���b�Z�[�W�L	*//* P1X-A362 */
#define	M_SSEC_UPOPE_DEL_LEAD_ZERO	8936	/* ���[�f�B���O0�폜	*//* P1X-A370 */
#define	M_SSEC_UPOPE_FILE_SORT_VOL	8937	/* �t�@�C���\�[�g�ő�{��	*//* P1X-A369 */
#define	M_SSEC_UPOPE_PRG_AUTODISP	8938	/* �ҏW-Prg�����\����	*//* P1X-A376 */
#define	M_SSEC_UPOPE_UNDO_CNF_MSG	8939	/* Undo-�m�F���b�Z�[�W	*//* P1X-A386 */
#define	M_SSEC_UPOPE_SLCT_DISP_CHG	8940	/* �Z���N�g�\���ؑ�	*//* P1X-A388 */
#define	M_SSEC_UPOPE_TOFS_ABSINC	8941	/* T�␳���/���Z�ؑ�	*//* P1X-A393 */
#define	M_SSEC_UPOPE_SYS1_COLOR	8942	/* �n��1 �\���F	*//* P1X-A404 */
#define	M_SSEC_UPOPE_SYS2_COLOR	8943	/* �n��2 �\���F	*//* P1X-A404 */
#define	M_SSEC_UPOPE_SYS3_COLOR	8944	/* �n��3 �\���F	*//* P1X-A404 */
#define	M_SSEC_UPOPE_SYS4_COLOR	8945	/* �n��4 �\���F	*//* P1X-A404 */
#define	M_SSEC_UPOPE_INDX_ACC	8946	/* �����x�w�W	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_OUTL	8947	/* �֊s���x�w�W	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_CSPD	8948	/* �R�[�i���x�w�W	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_SFIL	8949	/* S���t�B���^�w�W	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_SFIL2	8950	/* S���t�B���^2�w�W	*//* P1X-A414 */
#define	M_SSEC_UPOPE_NO_TAB_CNT_SW	8951	/* �J�E���^ Tab�L�[�֖ؑ���	*//* P1X-A433 */
#define	M_SSEC_UPOPE_EDT_WIN_SYS_CHG	8952	/* �ҏW�E�B���h�E�n���ؑ�	*//* P1X-A456 */
#define	M_SSEC_UPOPE_2SYS_DSP_SW_TYP	8953	/* 2�n�������\���n���ؑփ^�C�v	*//* P1X-A456 */
#define	M_SSEC_UPOPE_COOD_METHOD	8954	/* �w����������l	*//* P1X-A451J */
#define	M_SSEC_UPOPE_COOD_PAIR	8955	/* ���g���������l	*//* P1X-A451J */
#define	M_SSEC_UPOPE_USER_KEY_TYP	8956	/* ���[�U��`�L�[�^�C�v 	*//* P1X-A488 */
#define	M_SSEC_UPOPE_MON_MAIN_MENU(x)	(10500+(x))	/* �^�]���C�����j���[ (x=1�`30)	*//* P1X-A358 */
#define	M_SSEC_UPOPE_SET_MAIN_MENU(x)	(10550+(x))	/* �i�惁�C�����j���[ (x=1�`30)	*//* P1X-A358 */
#define	M_SSEC_UPOPE_EDT_MAIN_MENU(x)	(10600+(x))	/* �ҏW���C�����j���[ (x=1�`30)	*//* P1X-A358 */

/* ���o�̓p�����[�^	*/
#define	M_SSEC_UPIO_SINPORT	1	/* �f�[�^���́��|�[�g�ԍ���	*/
#define	M_SSEC_UPIO_SINDEV	2	/* �f�[�^���́����u�ԍ���	*/
#define	M_SSEC_UPIO_SOTPORT	3	/* �f�[�^�o�́��|�[�g�ԍ���	*/
#define	M_SSEC_UPIO_SOTDEV	4	/* �f�[�^�o�́����u�ԍ���	*/
#define	M_SSEC_UPIO_SNCPORT	5	/* �e�[�v�^�]���|�[�g�ԍ���	*/
#define	M_SSEC_UPIO_SNCDEV	6	/* �e�[�v�^�]�����u�ԍ���	*/
#define	M_SSEC_UPIO_MCRPORT	7	/* �}�N���v�����g���o�͐恄	*/
#define	M_SSEC_UPIO_MCRDEV	8	/* �}�N���v�����g�����u�ԍ���	*/
#define	M_SSEC_UPIO_PLCPORT	9	/* PLC���o�́��|�[�g�ԍ���	*/
#define	M_SSEC_UPIO_PLCDEV	10	/* PLC���o�́����u�ԍ���	*/
#define	M_SSEC_UPIO_RPGPORT	11	/* �����[�g�v���O����  ���́��|�[�g�ԍ���	*/
#define	M_SSEC_UPIO_RPGDEV	12	/* �����[�g�v���O����  ���́����u�ԍ���	*/
#define	M_SSEC_UPIO_EXTPORT	13	/* �O�����j�b�g�@�ʐM���|�[�g�ԍ���	*/
#define	M_SSEC_UPIO_EXTDEV	14	/* �O�����j�b�g�@�ʐM�����u�ԍ���	*/
#define	M_SSEC_UPIO_SIOTP1_DEVNAME	15	/* ���u1���u��	*/
#define	M_SSEC_UPIO_SIOTP1_BAUDRT	16	/* ���u1�{�[���C�g	*/
#define	M_SSEC_UPIO_SIOTP1_STOPBT	17	/* ���u1�X�g�b�v�r�b�g	*/
#define	M_SSEC_UPIO_SIOTP1_PARITYB	18	/* ���u1�p���e�B�L��	*/
#define	M_SSEC_UPIO_SIOTP1_PARITYA	19	/* ���u1even�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP1_LENCH	20	/* ���u1�L�����N�^��	*/
#define	M_SSEC_UPIO_SIOTP1_TERMTP	21	/* ���u1�^�[�~�l�[�^�^�C�v	*/
#define	M_SSEC_UPIO_SIOTP1_HANDTP	22	/* ���u1�n���h�V�F�[�N����	*/
#define	M_SSEC_UPIO_SIOTP1_DCPARI	23	/* ���u1DC�R�[�h�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP1_FEEDFLG	24	/* ���u1DC2/DC4�o��	*/
#define	M_SSEC_UPIO_SIOTP1_CROUT	25	/* ���u1CR�o��	*/
#define	M_SSEC_UPIO_SIOTP1_EIAOUT	26	/* ���u1EIA�o��	*/
#define	M_SSEC_UPIO_SIOTP1_FEEDCHR	27	/* ���u1�t�B�[�h��	*/
#define	M_SSEC_UPIO_SIOTP1_PARITYV	28	/* ���u1�p���e�BV	*/
#define	M_SSEC_UPIO_SIOTP1_TOUT	29	/* ���u1�^�C���A�E�g����	*/
#define	M_SSEC_UPIO_SIOTP1_DROFF	30	/* ���u1DR����	*/
#define	M_SSEC_UPIO_SIOTP1_DATASCII	31	/* ���u1�f�[�^ASCII	*/
#define	M_SSEC_UPIO_SIOTP1_INTYPE	32	/* ���u1���͕���	*/
#define	M_SSEC_UPIO_SIOTP1_KAKKOL	33	/* ���u1EIA�R�[�h[	*/
#define	M_SSEC_UPIO_SIOTP1_KAKKOR	34	/* ���u1EIA�R�[�h]	*/
#define	M_SSEC_UPIO_SIOTP1_SYAAPU	35	/* ���u1EIA�R�[�h#	*/
#define	M_SSEC_UPIO_SIOTP1_ASTA	36	/* ���u1EIA�R�[�h*	*/
#define	M_SSEC_UPIO_SIOTP1_EQUAL	37	/* ���u1EIA�R�[�h=	*/
#define	M_SSEC_UPIO_SIOTP1_KORONN	38	/* ���u1EIA�R�[�h:	*/
#define	M_SSEC_UPIO_SIOTP1_SYSCD	39	/* ���u1EIA�R�[�h$	*/
#define	M_SSEC_UPIO_SIOTP1_DOUKICD	40	/* ���u1EIA�R�[�h!	*/
#define	M_SSEC_UPIO_SIOTP2_DEVNAME	41	/* ���u2���u��	*/
#define	M_SSEC_UPIO_SIOTP2_BAUDRT	42	/* ���u2�{�[���C�g	*/
#define	M_SSEC_UPIO_SIOTP2_STOPBT	43	/* ���u2�X�g�b�v�r�b�g	*/
#define	M_SSEC_UPIO_SIOTP2_PARITYB	44	/* ���u2�p���e�B�L��	*/
#define	M_SSEC_UPIO_SIOTP2_PARITYA	45	/* ���u2even�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP2_LENCH	46	/* ���u2�L�����N�^��	*/
#define	M_SSEC_UPIO_SIOTP2_TERMTP	47	/* ���u2�^�[�~�l�[�^�^�C�v	*/
#define	M_SSEC_UPIO_SIOTP2_HANDTP	48	/* ���u2�n���h�V�F�[�N����	*/
#define	M_SSEC_UPIO_SIOTP2_DCPARI	49	/* ���u2DC�R�[�h�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP2_FEEDFLG	50	/* ���u2DC2/DC4�o��	*/
#define	M_SSEC_UPIO_SIOTP2_CROUT	51	/* ���u2CR�o��	*/
#define	M_SSEC_UPIO_SIOTP2_EIAOUT	52	/* ���u2EIA�o��	*/
#define	M_SSEC_UPIO_SIOTP2_FEEDCHR	53	/* ���u2�t�B�[�h��	*/
#define	M_SSEC_UPIO_SIOTP2_PARITYV	54	/* ���u2�p���e�BV	*/
#define	M_SSEC_UPIO_SIOTP2_TOUT	55	/* ���u2�^�C���A�E�g����	*/
#define	M_SSEC_UPIO_SIOTP2_DROFF	56	/* ���u2DR����	*/
#define	M_SSEC_UPIO_SIOTP2_DATASCII	57	/* ���u2�f�[�^ASCII	*/
#define	M_SSEC_UPIO_SIOTP2_INTYPE	58	/* ���u2���͕���	*/
#define	M_SSEC_UPIO_SIOTP2_KAKKOL	59	/* ���u2EIA�R�[�h[	*/
#define	M_SSEC_UPIO_SIOTP2_KAKKOR	60	/* ���u2EIA�R�[�h]	*/
#define	M_SSEC_UPIO_SIOTP2_SYAAPU	61	/* ���u2EIA�R�[�h#	*/
#define	M_SSEC_UPIO_SIOTP2_ASTA	62	/* ���u2EIA�R�[�h*	*/
#define	M_SSEC_UPIO_SIOTP2_EQUAL	63	/* ���u2EIA�R�[�h=	*/
#define	M_SSEC_UPIO_SIOTP2_KORONN	64	/* ���u2EIA�R�[�h:	*/
#define	M_SSEC_UPIO_SIOTP2_SYSCD	65	/* ���u2EIA�R�[�h$	*/
#define	M_SSEC_UPIO_SIOTP2_DOUKICD	66	/* ���u2EIA�R�[�h!	*/
#define	M_SSEC_UPIO_SIOTP3_DEVNAME	67	/* ���u3���u��	*/
#define	M_SSEC_UPIO_SIOTP3_BAUDRT	68	/* ���u3�{�[���C�g	*/
#define	M_SSEC_UPIO_SIOTP3_STOPBT	69	/* ���u3�X�g�b�v�r�b�g	*/
#define	M_SSEC_UPIO_SIOTP3_PARITYB	70	/* ���u3�p���e�B�L��	*/
#define	M_SSEC_UPIO_SIOTP3_PARITYA	71	/* ���u3even�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP3_LENCH	72	/* ���u3�L�����N�^��	*/
#define	M_SSEC_UPIO_SIOTP3_TERMTP	73	/* ���u3�^�[�~�l�[�^�^�C�v	*/
#define	M_SSEC_UPIO_SIOTP3_HANDTP	74	/* ���u3�n���h�V�F�[�N����	*/
#define	M_SSEC_UPIO_SIOTP3_DCPARI	75	/* ���u3DC�R�[�h�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP3_FEEDFLG	76	/* ���u3DC2/DC4�o��	*/
#define	M_SSEC_UPIO_SIOTP3_CROUT	77	/* ���u3CR�o��	*/
#define	M_SSEC_UPIO_SIOTP3_EIAOUT	78	/* ���u3EIA�o��	*/
#define	M_SSEC_UPIO_SIOTP3_FEEDCHR	79	/* ���u3�t�B�[�h��	*/
#define	M_SSEC_UPIO_SIOTP3_PARITYV	80	/* ���u3�p���e�BV	*/
#define	M_SSEC_UPIO_SIOTP3_TOUT	81	/* ���u3�^�C���A�E�g����	*/
#define	M_SSEC_UPIO_SIOTP3_DROFF	82	/* ���u3DR����	*/
#define	M_SSEC_UPIO_SIOTP3_DATASCII	83	/* ���u3�f�[�^ASCII	*/
#define	M_SSEC_UPIO_SIOTP3_INTYPE	84	/* ���u3���͕���	*/
#define	M_SSEC_UPIO_SIOTP3_KAKKOL	85	/* ���u3EIA�R�[�h[	*/
#define	M_SSEC_UPIO_SIOTP3_KAKKOR	86	/* ���u3EIA�R�[�h]	*/
#define	M_SSEC_UPIO_SIOTP3_SYAAPU	87	/* ���u3EIA�R�[�h#	*/
#define	M_SSEC_UPIO_SIOTP3_ASTA	88	/* ���u3EIA�R�[�h*	*/
#define	M_SSEC_UPIO_SIOTP3_EQUAL	89	/* ���u3EIA�R�[�h=	*/
#define	M_SSEC_UPIO_SIOTP3_KORONN	90	/* ���u3EIA�R�[�h:	*/
#define	M_SSEC_UPIO_SIOTP3_SYSCD	91	/* ���u3EIA�R�[�h$	*/
#define	M_SSEC_UPIO_SIOTP3_DOUKICD	92	/* ���u3EIA�R�[�h!	*/
#define	M_SSEC_UPIO_SIOTP4_DEVNAME	93	/* ���u4���u��	*/
#define	M_SSEC_UPIO_SIOTP4_BAUDRT	94	/* ���u4�{�[���C�g	*/
#define	M_SSEC_UPIO_SIOTP4_STOPBT	95	/* ���u4�X�g�b�v�r�b�g	*/
#define	M_SSEC_UPIO_SIOTP4_PARITYB	96	/* ���u4�p���e�B�L��	*/
#define	M_SSEC_UPIO_SIOTP4_PARITYA	97	/* ���u4even�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP4_LENCH	98	/* ���u4�L�����N�^��	*/
#define	M_SSEC_UPIO_SIOTP4_TERMTP	99	/* ���u4�^�[�~�l�[�^�^�C�v	*/
#define	M_SSEC_UPIO_SIOTP4_HANDTP	100	/* ���u4�n���h�V�F�[�N����	*/
#define	M_SSEC_UPIO_SIOTP4_DCPARI	101	/* ���u4DC�R�[�h�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP4_FEEDFLG	102	/* ���u4DC2/DC4�o��	*/
#define	M_SSEC_UPIO_SIOTP4_CROUT	103	/* ���u4CR�o��	*/
#define	M_SSEC_UPIO_SIOTP4_EIAOUT	104	/* ���u4EIA�o��	*/
#define	M_SSEC_UPIO_SIOTP4_FEEDCHR	105	/* ���u4�t�B�[�h��	*/
#define	M_SSEC_UPIO_SIOTP4_PARITYV	106	/* ���u4�p���e�BV	*/
#define	M_SSEC_UPIO_SIOTP4_TOUT	107	/* ���u4�^�C���A�E�g����	*/
#define	M_SSEC_UPIO_SIOTP4_DROFF	108	/* ���u4DR����	*/
#define	M_SSEC_UPIO_SIOTP4_DATASCII	109	/* ���u4�f�[�^ASCII	*/
#define	M_SSEC_UPIO_SIOTP4_INTYPE	110	/* ���u4���͕���	*/
#define	M_SSEC_UPIO_SIOTP4_KAKKOL	111	/* ���u4EIA�R�[�h[	*/
#define	M_SSEC_UPIO_SIOTP4_KAKKOR	112	/* ���u4EIA�R�[�h]	*/
#define	M_SSEC_UPIO_SIOTP4_SYAAPU	113	/* ���u4EIA�R�[�h#	*/
#define	M_SSEC_UPIO_SIOTP4_ASTA	114	/* ���u4EIA�R�[�h*	*/
#define	M_SSEC_UPIO_SIOTP4_EQUAL	115	/* ���u4EIA�R�[�h=	*/
#define	M_SSEC_UPIO_SIOTP4_KORONN	116	/* ���u4EIA�R�[�h:	*/
#define	M_SSEC_UPIO_SIOTP4_SYSCD	117	/* ���u4EIA�R�[�h$	*/
#define	M_SSEC_UPIO_SIOTP4_DOUKICD	118	/* ���u4EIA�R�[�h!	*/
#define	M_SSEC_UPIO_SIOTP5_DEVNAME	119	/* ���u5���u��	*/
#define	M_SSEC_UPIO_SIOTP5_BAUDRT	120	/* ���u5�{�[���C�g	*/
#define	M_SSEC_UPIO_SIOTP5_STOPBT	121	/* ���u5�X�g�b�v�r�b�g	*/
#define	M_SSEC_UPIO_SIOTP5_PARITYB	122	/* ���u5�p���e�B�L��	*/
#define	M_SSEC_UPIO_SIOTP5_PARITYA	123	/* ���u5even�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP5_LENCH	124	/* ���u5�L�����N�^��	*/
#define	M_SSEC_UPIO_SIOTP5_TERMTP	125	/* ���u5�^�[�~�l�[�^�^	*/
#define	M_SSEC_UPIO_SIOTP5_HANDTP	126	/* ���u5�n���h�V�F�[�N����	*/
#define	M_SSEC_UPIO_SIOTP5_DCPARI	127	/* ���u5DC�R�[�h�p���e�B	*/
#define	M_SSEC_UPIO_SIOTP5_FEEDFLG	128	/* ���u5DC2/DC4�o��	*/
#define	M_SSEC_UPIO_SIOTP5_CROUT	129	/* ���u5CR�o��	*/
#define	M_SSEC_UPIO_SIOTP5_EIAOUT	130	/* ���u5EIA�o��	*/
#define	M_SSEC_UPIO_SIOTP5_FEEDCHR	131	/* ���u5�t�B�[�h��	*/
#define	M_SSEC_UPIO_SIOTP5_PARITYV	132	/* ���u5�p���e�BV	*/
#define	M_SSEC_UPIO_SIOTP5_TOUT	133	/* ���u5�^�C���A�E�g����	*/
#define	M_SSEC_UPIO_SIOTP5_DROFF	134	/* ���u5DR����	*/
#define	M_SSEC_UPIO_SIOTP5_DATASCII	135	/* ���u5�f�[�^ASCII	*/
#define	M_SSEC_UPIO_SIOTP5_INTYPE	136	/* ���u5���͕���	*/
#define	M_SSEC_UPIO_SIOTP5_KAKKOL	137	/* ���u5EIA�R�[�h[	*/
#define	M_SSEC_UPIO_SIOTP5_KAKKOR	138	/* ���u5EIA�R�[�h]	*/
#define	M_SSEC_UPIO_SIOTP5_SYAAPU	139	/* ���u5EIA�R�[�h#	*/
#define	M_SSEC_UPIO_SIOTP5_ASTA	140	/* ���u5EIA�R�[�h*	*/
#define	M_SSEC_UPIO_SIOTP5_EQUAL	141	/* ���u5EIA�R�[�h=	*/
#define	M_SSEC_UPIO_SIOTP5_KORONN	142	/* ���u5EIA�R�[�h:	*/
#define	M_SSEC_UPIO_SIOTP5_SYSCD	143	/* ���u5EIA�R�[�h$	*/
#define	M_SSEC_UPIO_SIOTP5_DOUKICD	144	/* ���u5EIA�R�[�h!	*/
#define	M_SSEC_UPIO_HANDYTERMINAL_PORT	9017	/* �n���f�B�^�[�~�i�����|�[�g�ԍ���	*//* P1X-A193 */
#define	M_SSEC_UPIO_HANDYTERMINAL_DEV	9018	/* �n���f�B�^�[�~�i�������u�ԍ���	*//* P1X-A193 */
#define	M_SSEC_UPIO_DATA_IO_PORT	9051	/* �f�[�^���o�͐ڑ���	*//* P1X-A249D */
#define	M_SSEC_UPIO_TAPE_MODE_PORT	9052	/* �e�[�v�^�]�ڑ���	*//* P1X-A249D */
#define	M_SSEC_UPIO_M2_MACRO_CONVERT	9053	/* M2�}�N���R���o�[�^�L��	*//* P1X-A380 */
#define	M_SSEC_UPIO_MCRFNAME	9054	/* �}�N���v�����g�o�̓t�@�C����	*//* P1X-A422 */
#define	M_SSEC_UPIO_SIOTP1_OUTBUF	9120	/* ���u1�o�̓o�b�t�@	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP2_OUTBUF	9220	/* ���u2�o�̓o�b�t�@	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP3_OUTBUF	9320	/* ���u3�o�̓o�b�t�@	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP4_OUTBUF	9420	/* ���u4�o�̓o�b�t�@	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP5_OUTBUF	9520	/* ���u5�o�̓o�b�t�@	*//* P1X-A020AY */

/* �R���s���[�^�����N�p�����[�^	*/
#define	M_SSEC_UPHLNK_LBAUT	1	/* �]�����x	*/
#define	M_SSEC_UPHLNK_LSTOPBT	2	/* �X�g�b�vbit	*/
#define	M_SSEC_UPHLNK_LPRITYB	3	/* �p���e�B�L��	*/
#define	M_SSEC_UPHLNK_LPRITYA	4	/* �����p���e�B	*/
#define	M_SSEC_UPHLNK_LLENGTH	5	/* �L�����N�^��	*/
#define	M_SSEC_UPHLNK_LHAND	6	/* �n���h�V�F�[�N����	*/
#define	M_SSEC_UPHLNK_LTIMOUT	7	/* �^�C���A�E�g����	*/
#define	M_SSEC_UPHLNK_LCDMOD	8	/* �f�[�^�R�[�h	*/
#define	M_SSEC_UPHLNK_LPARA1	9	/* �����N�p�����[�^1	*/
#define	M_SSEC_UPHLNK_LPARA2	10	/* �����N�p�����[�^2	*/
#define	M_SSEC_UPHLNK_LPARA3	11	/* �����N�p�����[�^3	*/
#define	M_SSEC_UPHLNK_LPARA4	12	/* �����N�p�����[�^4	*/
#define	M_SSEC_UPHLNK_LPARA5	13	/* �����N�p�����[�^5	*/
#define	M_SSEC_UPHLNK_LSTCODE	14	/* �X�^�[�g�R�[�h	*/
#define	M_SSEC_UPHLNK_LCODOUT	15	/* ����R�[�h�o��	*/
#define	M_SSEC_UPHLNK_LLNKTMR	16	/* ����R�[�h���ԊԊu	*/
#define	M_SSEC_UPHLNK_LWAITM	17	/* �҂�����	*/
#define	M_SSEC_UPHLNK_LPCKLEN	18	/* �p�P�b�g��	*/
#define	M_SSEC_UPHLNK_BUFFSIZE	19	/* �o�b�t�@�T�C�Y	*/
#define	M_SSEC_UPHLNK_STARTSIZE	20	/* �^�]�J�n�T�C�Y	*/
#define	M_SSEC_UPHLNK_DC1_OUTSIZE	21	/* DC1�o�̓T�C�Y	*/
#define	M_SSEC_UPHLNK_LPOLLTM	22	/* �|�[�����O����	*/
#define	M_SSEC_UPHLNK_LTRNSTM	23	/* ���M�ؑ֎���	*/
#define	M_SSEC_UPHLNK_LRTRYTM	24	/* ���g���C��	*/

/* �C�[�T�l�b�g�p�����[�^	*/
#define	M_SSEC_UPETHER_ETHERNET	1	/* �T�[�r�X�J�n	*/
#define	M_SSEC_UPETHER_IPADDR	2	/* IP�A�h���X	*/
#define	M_SSEC_UPETHER_SUBNET	3	/* �T�u�l�b�g�}�X�N	*/
#define	M_SSEC_UPETHER_GATEWAY	4	/* �Q�[�g�E�F�C	*/
#define	M_SSEC_UPETHER_PORTNUMBER	5	/* �|�[�g�ԍ�	*/
#define	M_SSEC_UPETHER_BEFORE_HOSTADDR	6	/* �ϊ��O�̃C�|�T�l�b�g�ʐM�p�����[�^(�z�X�g��IP�A�h���X)	*/
#define	M_SSEC_UPETHER_HOSTNUMBER	7	/* �z�X�g�̃|�[�g�ԍ�	*/
#define	M_SSEC_UPETHER_LOCAL_IPADDR	34	/* Local IP Address	*//* P1X-A120 */
#define	M_SSEC_UPETHER_LOCAL_SUBNET	35	/* Local Subnetmask	*//* P1X-A120 */
#define	M_SSEC_UPETHER_PC_AUTO_IPADDR	50	/* IP�A�h���X�����ݒ�	*//* P1X-A018 */
#define	M_SSEC_UPETHER_PC_IPADDR	51	/* IP�A�h���X�iPC)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_PC_SUBNET	52	/* �T�u�l�b�g�}�X�N�iPC)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_PC_GATEWAY	53	/* �Q�[�g�E�F�C�iPC)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_TIMEOUT	54	/* �^�C���A�E�g	*//* P1X-A018 */
#define	M_SSEC_UPETHER_USE_HOSTNUMBER	55	/* �g�p����z�X�g�̔ԍ�	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_LOGINNAME(x)	(100+x)	/* ���[�U��(�z�X�gA�`D)(x=0�`3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_PWORD(x)	(200+(x))	/* �p�X���[�h(�z�X�gA�`D)(x=0�`3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_DIRPATH(x)	(300+(x))	/* �f�B���N�g��(�z�X�gA�`D)(x=0�`3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_IPADDR(x)	(400+(x))	/* �z�X�g�A�h���X(�z�X�gA�`D)(x=0�`3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_TYPE(x)	(500+(x))	/* �z�X�g�^�C�v(�z�X�g1�`4)(x=0�`3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_FILE(x)	(600+(x))	/* �z�X�g ���[�h�ʒu�F�t�@�C��(�z�X�g1�`4)(x=0�`3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_SIZE(x)	(700+(x))	/* �z�X�g ���[�h�ʒu�F�T�C�Y(�z�X�g1�`4)(x=0�`3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_DIR(x)	(800+(x))	/* �z�X�g ���[�h�ʒu�F<DIR>(�z�X�g1�`4)(x=0�`3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_CMT(x)	(900+(x))	/* �z�X�g ���[�h�ʒu�F�R�����g(�z�X�g1�`4)(x=0�`3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_NUM(x)	(1000+(x))	/* �z�X�g ���[�h���F�R�����g(�z�X�g1�`4)(x=0�`3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_DISP_TYPE(x)	(1100+(x))	/* �z�X�g �L��������(�z�X�g1�`4)(x=0�`3)	*//* P1X-A018 */

/* �o���A	*/
#define	M_SSEC_UPBARI_BARI0X	1	/* P0 X	*/
#define	M_SSEC_UPBARI_BARI1X	2	/* P1 X	*/
#define	M_SSEC_UPBARI_BARI1Z	3	/* P1 Z	*/
#define	M_SSEC_UPBARI_BARI2X	4	/* P2 X	*/
#define	M_SSEC_UPBARI_BARI2Z	5	/* P2 Z	*/
#define	M_SSEC_UPBARI_BARI3X	6	/* P3 X	*/
#define	M_SSEC_UPBARI_BARI3Z	7	/* P3 Z	*/
#define	M_SSEC_UPBARI_BARI4X	8	/* P4 X	*/
#define	M_SSEC_UPBARI_BARI4Z	9	/* P4 Z	*/
#define	M_SSEC_UPBARI_BARI5X	10	/* P5 X	*/
#define	M_SSEC_UPBARI_BARI5Z	11	/* P5 Z	*/
#define	M_SSEC_UPBARI_BARI6X	12	/* P6 X	*/
#define	M_SSEC_UPBARI_BARI6Z	13	/* P6 Z	*/
#define	M_SSEC_UPBARI_BARI_ON	20	/* �o���A�L��	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI7X	21	/* P7 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI8X	22	/* P8 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI8Z	23	/* P8 Z	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI9X	24	/* P9 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI10X	25	/* P10 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI10Z	26	/* P10 Z	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BRFORML	27	/* �o���A�^�C�v(��)	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BRFORMR	28	/* �o���A�^�C�v(�E)	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI_SC	29	/* �󂯓n��������	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_TAIL_AL	30	/* �e�[���X�g�b�N�p(��)	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_TAIL_AR	31	/* �e�[���X�g�b�N�p(�E)	*//* P0Y-A013F */

/* ��{�p�����[�^	*/
#define	M_SSEC_BASEPRM_SYSON	1	/* �n���L���ݒ�	*/
#define	M_SSEC_BASEPRM_PLCSYSON	2	/* �n���L���ݒ�(PLC)	*/
#define	M_SSEC_BASEPRM_AXISMAS	3	/* ����	*/
#define	M_SSEC_BASEPRM_PLCAXISMAS	4	/* ����(PLC)	*/
#define	M_SSEC_BASEPRM_IUNIT	5	/* �ŏ��ݒ�P��	*/
#define	M_SSEC_BASEPRM_PLCIUNIT	6	/* �ŏ��ݒ�P��(PLC)	*/
#define	M_SSEC_BASEPRM_CTRLUNIT	7	/* ����P��	*//* P1X-A002A */
#define	M_SSEC_BASEPRM_PLCCTRLUNIT	8	/* ����P��(PLC)	*//* P1X-A002A */
#define	M_SSEC_BASEPRM_INIPLAN	10	/* �C�j�V�������ʑI��	*/
#define	M_SSEC_BASEPRM_BASE_AXIS_I	11	/* ���E�ʌv��������(��{��I)	*/
#define	M_SSEC_BASEPRM_BASE_AXIS_J	12	/* ���E�ʌv��������(��{��J)	*/
#define	M_SSEC_BASEPRM_BASE_AXIS_K	13	/* ���E�ʌv��������(��{��K)	*/
#define	M_SSEC_BASEPRM_HYOKOH1	14	/* ���s�� I	*/
#define	M_SSEC_BASEPRM_HTATEH1	15	/* ���s�� J	*/
#define	M_SSEC_BASEPRM_HTAKAH1	16	/* ���s�� K	*/
#define	M_SSEC_BASEPRM_CMDTYP	20	/* �w�߃^�C�v	*/
#define	M_SSEC_BASEPRM_PLCSEL	21	/* ���_�[�I��	*/
#define	M_SSEC_BASEPRM_SP_NUM	22	/* �厲��	*/
#define	M_SSEC_BASEPRM_MINCH	23	/* M_INCH	*/
#define	M_SSEC_BASEPRM_IINCH	24	/* �C�j�V�����C���`	*/
#define	M_SSEC_BASEPRM_PCINCH	25	/* PLC���C���`�w��	*/
#define	M_SSEC_BASEPRM_LANG	26	/* ����ؑ�(Lang)	*/
#define	M_SSEC_BASEPRM_AUXNO	27	/* MR-J2-CT�ڑ���	*/
#define	M_SSEC_BASEPRM_NSKNO	28	/* ���K�g���N���[�^�ڑ���	*/
#define	M_SSEC_BASEPRM_MEMPRG	43	/* �v���O�����̈�I��	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_MEMTOL	44	/* �H��␳�f�[�^�̈�I��	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_MEMVAL	45	/* �R�����ϐ��̈�I��	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_SETUP	50	/* �Z�b�g�A�b�v�����N��	*/
#define	M_SSEC_BASEPRM_IABSM	73	/* �C�j�V������Βl	*/
#define	M_SSEC_BASEPRM_ISYNC	74	/* �C�j�V������������	*/
#define	M_SSEC_BASEPRM_IG00	75	/* �C�j�V����G00	*/
#define	M_SSEC_BASEPRM_ABSINC	76	/* ABS/INC�A�h���X	*/
#define	M_SSEC_BASEPRM_RADIUS	77	/* ���a�w�莲�̑����w��	*/
#define	M_SSEC_BASEPRM_DECPT2	78	/* �����_�^�C�v2	*/
#define	M_SSEC_BASEPRM_FLDIGT	79	/* F1���L��	*/
#define	M_SSEC_BASEPRM_DRILZ	80	/* ���������w��	*/
#define	M_SSEC_BASEPRM_GMACP	81	/* G�R�[�h�p�����[�^�D��	*/
#define	M_SSEC_BASEPRM_GEOMET	82	/* �W�I���g���b�N	*/
#define	M_SSEC_BASEPRM_RADERMA	84	/* �~�ʌ덷	*/
#define	M_SSEC_BASEPRM_G00DRN	85	/* G00�h���C����	*/
#define	M_SSEC_BASEPRM_G01INTP	86	/* G00����	*/
#define	M_SSEC_BASEPRM_G96G0	87	/* ������w�߂̎�����萧��	*/
#define	M_SSEC_BASEPRM_G30SL	88	/* G30�\�t�g���~�b�g����	*/
#define	M_SSEC_BASEPRM_CUTRT	89	/* ��]���߉��	*/
#define	M_SSEC_BASEPRM_LINRT	90	/* �����^��]��	*/
#define	M_SSEC_BASEPRM_MPOINT	91	/* ���ԓ_����	*/
#define	M_SSEC_BASEPRM_TCHGA	92	/* �t�����H�����	*/
#define	M_SSEC_BASEPRM_WMVFIN	93	/* �n���ԑ҂���������	*/
#define	M_SSEC_BASEPRM_TLSBK	94	/* �V���O���u���b�N�������J�E���g�I��	*/
#define	M_SSEC_BASEPRM_T0TFOF	95	/* TF�o��	*/
#define	M_SSEC_BASEPRM_TLTYPE	96	/* �H������Ǘ��^�C�v	*/
#define	M_SSEC_BASEPRM_TLDIGT	97	/* �H��␳�ԍ�1���w��	*/
#define	M_SSEC_BASEPRM_TLNO	98	/* �H��␳�ԍ�	*/
#define	M_SSEC_BASEPRM_TRESET	99	/* �H��␳�ʃL�����Z��	*/
#define	M_SSEC_BASEPRM_TMOVE	100	/* �H��␳����	*/
#define	M_SSEC_BASEPRM_TABSMV	101	/* �H��␳����	*/
#define	M_SSEC_BASEPRM_TLM	102	/* �蓮�H��������	*/
#define	M_SSEC_BASEPRM_TLIFE	103	/* �����Ǘ��L��	*/
#define	M_SSEC_BASEPRM_TCOM2	104	/* �H��w�ߕ���2	*/
#define	M_SSEC_BASEPRM_TSEL2	105	/* �H��I�����2	*/
#define	M_SSEC_BASEPRM_TCOUNT	106	/* ����������	*/
#define	M_SSEC_BASEPRM_TLLFSC	107	/* �����Ǘ��\����ʕ���	*/
#define	M_SSEC_BASEPRM_TLRECTM	108	/* �����Ǘ��ăJ�E���gM�R�[�h	*/
#define	M_SSEC_BASEPRM_SUBM	109	/* ���M�R�[�h�L��	*/
#define	M_SSEC_BASEPRM_M96CODE	110	/* M96���M�R�[�h	*/
#define	M_SSEC_BASEPRM_M97CODE	111	/* M97���M�R�[�h	*/
#define	M_SSEC_BASEPRM_STRG	112	/* �X�e�[�^�X�g���K�����L��	*/
#define	M_SSEC_BASEPRM_INT2	113	/* �����ݕ����^�C�v2�L��	*/
#define	M_SSEC_BASEPRM_MCRINT	114	/* �}�N�������̏����Z�b�g	*/
#define	M_SSEC_BASEPRM_THRWAIT	115	/* �˂��؂�グ�҂�	*/
#define	M_SSEC_BASEPRM_G30SLM	116	/* �\�t�g���~�b�g����(�蓮�^�])	*/
#define	M_SSEC_BASEPRM_HSENS	117	/* �n���h�������؂芷��	*/
#define	M_SSEC_BASEPRM_MIRRA	118	/* �Ό��n����H��ݒ�����I��	*/
#define	M_SSEC_BASEPRM_TOMIRON	119	/* T�w�ߑΌ��n����~���[�C���[�W�I��	*/
#define	M_SSEC_BASEPRM_TOFVAL	120	/* �}�N���ϐ��؊���	*/
#define	M_SSEC_BASEPRM_EDLKC	121	/* �ҏW���b�NC	*/
#define	M_SSEC_BASEPRM_PGLKC	122	/* �v���O�����\�����b�N	*/
#define	M_SSEC_BASEPRM_ORIGN	123	/* �I���W���[���֎~	*/
#define	M_SSEC_BASEPRM_OFSFIX	124	/* �H��␳�ԍ��Œ�	*/
#define	M_SSEC_BASEPRM_REALF	125	/* �����葬�x�\��	*/
#define	M_SSEC_BASEPRM_PBG90	126	/* �v���C�o�b�NG90	*/
#define	M_SSEC_BASEPRM_DPRINT	127	/* DPRINT������	*/
#define	M_SSEC_BASEPRM_RSTVC1	128	/* ���Z�b�g���ϐ���	*/
#define	M_SSEC_BASEPRM_PWRVC1	129	/* �d���I�����ϐ���	*/
#define	M_SSEC_BASEPRM_SETT	130	/* �I���H��ԍ��\��	*/
#define	M_SSEC_BASEPRM_FILDCC	131	/* �t�B�[�h�t�H���[�h�t�B���^�[	*/
#define	M_SSEC_BASEPRM_BRIGHT	132	/* CRT�P�x����	*/
#define	M_SSEC_BASEPRM_OFSMEM	133	/* �H��␳��ʐݒ葀��I��	*/
#define	M_SSEC_BASEPRM_LCDNEG	134	/* LCD���]�\��	*/
#define	M_SSEC_BASEPRM_UNITNAME	135	/* ���j�b�g��	*/
#define	M_SSEC_BASEPRM_OPTYPE	136	/* ���상�j���[�\���L��(optype)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CNTSEL	137	/* ���W�l��ʕ\���J�E���^�؊�(Cntsel)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_PNOSEL	138	/* �p�����[�^�ԍ��ɂ���ʑI��	*/
#define	M_SSEC_BASEPRM_EDTYPE	139	/* �ҏW�^�C�v�؂芷��	*/
#define	M_SSEC_BASEPRM_M100	140	/* M�R�[�h�ԍ�100�`	*/
#define	M_SSEC_BASEPRM_M200	141	/* M�R�[�h�ԍ�200�`	*/
#define	M_SSEC_BASEPRM_M300	142	/* M�R�[�h�ԍ�300�`	*/
#define	M_SSEC_BASEPRM_M400	143	/* M�R�[�h�ԍ�400�`	*/
#define	M_SSEC_BASEPRM_MDLKOF	144	/* MDI�ݒ胍�b�N	*/
#define	M_SSEC_BASEPRM_LABS	145	/* �蓮ABS�p�����[�^	*/
#define	M_SSEC_BASEPRM_SCLAMP	146	/* �厲��]���N�����v	*/
#define	M_SSEC_BASEPRM_SMINV	147	/* �厲�Œ��]���N�����v�^�C�v	*/
#define	M_SSEC_BASEPRM_IG611	148	/* �C�j�V���������x	*/
#define	M_SSEC_BASEPRM_CIREFT	149	/* �~�ʌ������x�؊�	*/
#define	M_SSEC_BASEPRM_FILDCCG0	150	/* G00�t�B�[�h�t�H���[�h�t�B���^	*/
#define	M_SSEC_BASEPRM_RSTINT	151	/* ���Z�b�g�C�j�V����	*/
#define	M_SSEC_BASEPRM_INIG20	152	/* �C�j�V�����w�ߒP��	*/
#define	M_SSEC_BASEPRM_FIXBDC	153	/* ���ꌸ���`�F�b�N	*/
#define	M_SSEC_BASEPRM_PDOOR	154	/* �h�A�C���^���b�N�U�n����	*/
#define	M_SSEC_BASEPRM_DOORM	155	/* �n�����ʃh�A�C���^���b�N�U�p�M�����̓f�o�C�X1	*/
#define	M_SSEC_BASEPRM_DOORS	156	/* �n�����ʃh�A�C���^���b�N�U�p�M�����̓f�o�C�X2	*/
#define	M_SSEC_BASEPRM_BSCRTYP	157	/* F0�I�[�g����	*/
#define	M_SSEC_BASEPRM_BSCPGNO	158	/* F0�I�[�g�����v���O����No.	*/
#define	M_SSEC_BASEPRM_FIXPRO	159	/* �Œ�T�C�N���ҏW	*/
#define	M_SSEC_BASEPRM_E2ROM	160	/* e2rom(���g�p)	*/
#define	M_SSEC_BASEPRM_TEST	161	/* �V�~�����[�V�����e�X�g	*/
#define	M_SSEC_BASEPRM_SYSNAME	162	/* �n����	*/
#define	M_SSEC_BASEPRM_M2NAME	163	/* ��2�⏕�R�[�h	*/
#define	M_SSEC_BASEPRM_TAPROV	164	/* �^�b�v�߂��I�[�o���C�h	*/
#define	M_SSEC_BASEPRM_TAPOVR	165	/* �^�b�v�߂�I�[�o���C�h	*/
#define	M_SSEC_BASEPRM_DWLSKP	166	/* G04�X�L�b�v����	*/
#define	M_SSEC_BASEPRM_SKPSPD0	167	/* G31�X�L�b�v���x	*/
#define	M_SSEC_BASEPRM_SKPCND1	168	/* G31.1�X�L�b�v����	*/
#define	M_SSEC_BASEPRM_SKPSPD1	169	/* G31.1�X�L�b�v���x	*/
#define	M_SSEC_BASEPRM_SKPCND2	170	/* G31.2�X�L�b�v����	*/
#define	M_SSEC_BASEPRM_SKPSPD2	171	/* G31.2�X�L�b�v���x	*/
#define	M_SSEC_BASEPRM_SKPCND3	172	/* G31.3�X�L�b�v����	*/
#define	M_SSEC_BASEPRM_SKPSPD3	173	/* G31.3�X�L�b�v���x	*/
#define	M_SSEC_BASEPRM_SKPCND4	174	/* G31.4�X�L�b�v����	*/
#define	M_SSEC_BASEPRM_SKPSPD4	175	/* G31.4�X�L�b�v���x	*/
#define	M_SSEC_BASEPRM_G96AXNO	176	/* ������莲	*/
#define	M_SSEC_BASEPRM_CHNCRP	177	/* �˂��؏グ���x	*/
#define	M_SSEC_BASEPRM_CLMPM	178	/* �N�����vM�R�[�h	*/
#define	M_SSEC_BASEPRM_CLMPD	179	/* �A���N�����vM��̃h�E�F��	*/
#define	M_SSEC_BASEPRM_SPDF1	180	/* F1�����葬�xF1	*/
#define	M_SSEC_BASEPRM_SPDF2	181	/* F1�����葬�xF2	*/
#define	M_SSEC_BASEPRM_SPDF3	182	/* F1�����葬�xF3	*/
#define	M_SSEC_BASEPRM_SPDF4	183	/* F1�����葬�xF4	*/
#define	M_SSEC_BASEPRM_SPDF5	184	/* F1�����葬�xF5	*/
#define	M_SSEC_BASEPRM_SXCNT	185	/* �X�Ύ�����L��	*/
#define	M_SSEC_BASEPRM_SANGL	186	/* �X�Ίp�x	*/
#define	M_SSEC_BASEPRM_SZRMV	187	/* ���_���A���␳	*/
#define	M_SSEC_BASEPRM_INPOS	188	/* �C���|�W�`�F�b�N�L��	*/
#define	M_SSEC_BASEPRM_HANACDC	189	/* �n���h�����萔0	*/
#define	M_SSEC_BASEPRM_MMACSET	190	/* M�R�[�h�ďo���}�N��	*/
#define	M_SSEC_BASEPRM_SMACSET	191	/* S�R�[�h�ďo���}�N��	*/
#define	M_SSEC_BASEPRM_TMACSET	192	/* T�R�[�h�ďo���}�N��	*/
#define	M_SSEC_BASEPRM_BMACSET	193	/* ��2�⏕�R�[�h�ďo���}�N��	*/
#define	M_SSEC_BASEPRM_SSELEC	194	/* �C�j�V�����厲����I��	*/
#define	M_SSEC_BASEPRM_G0ACC	195	/* G0�X�����������L��	*/
#define	M_SSEC_BASEPRM_G1ACC	196	/* G1�X�����������L��	*/
#define	M_SSEC_BASEPRM_MIROFS	197	/* �Ό��n����Ԋu	*/
#define	M_SSEC_BASEPRM_TMIRS1	198	/* T�w�ߑΌ��n����̐n����I��	*/
#define	M_SSEC_BASEPRM_TMIRS2	199	/* T�w�ߑΌ��n����̐n����I��	*/
#define	M_SSEC_BASEPRM_G0BDCC	200	/* G0��ԑO	*/
#define	M_SSEC_BASEPRM_G1BF	201	/* �ō����x	*/
#define	M_SSEC_BASEPRM_G1BTL	202	/* ���萔	*/
#define	M_SSEC_BASEPRM_MRCK	203	/* �~�ʔ��a�덷�␳�W��	*/
#define	M_SSEC_BASEPRM_CIRDEC	204	/* �~�ʌ������x	*/
#define	M_SSEC_BASEPRM_RSTGMD	205	/* ���[�_��G�R�[�h���Z�b�g�ݒ�	*/
#define	M_SSEC_BASEPRM_FHTYP	206	/* �t�B�[�h�z�[���h��~�^�C�v	*/
#define	M_SSEC_BASEPRM_FHNO	207	/* �t�B�[�h�z�[���h�O���M���f�o�C�X	*/
#define	M_SSEC_BASEPRM_PROAXY	208	/* �X�Ίp�x��1��	*/
#define	M_SSEC_BASEPRM_MACAXY	209	/* �X�Ίp�x��2��	*/
#define	M_SSEC_BASEPRM_MACAXX	210	/* �X�Ίp�x��3��	*/
#define	M_SSEC_BASEPRM_EXTDCC	211	/* �O���������x	*/
#define	M_SSEC_BASEPRM_AUX01	300	/* aux01(���g�p)	*/
#define	M_SSEC_BASEPRM_AUX02	301	/* aux02	*/
#define	M_SSEC_BASEPRM_AUX03	302	/* aux03	*/
#define	M_SSEC_BASEPRM_AUX04	303	/* aux04	*/
#define	M_SSEC_BASEPRM_AUX05	304	/* aux05	*/
#define	M_SSEC_BASEPRM_AUX06	305	/* aux06	*/
#define	M_SSEC_BASEPRM_AUX07	306	/* aux07	*/
#define	M_SSEC_BASEPRM_AUX08	307	/* aux08(�g�p�s��)	*/
#define	M_SSEC_BASEPRM_AUX09	308	/* aux09	*/
#define	M_SSEC_BASEPRM_AUX10	309	/* aux10	*/
#define	M_SSEC_BASEPRM_AUX11	310	/* aux11	*/
#define	M_SSEC_BASEPRM_AUX12	311	/* aux12	*/
#define	M_SSEC_BASEPRM_SET01	350	/* set01	*/
#define	M_SSEC_BASEPRM_SET02	351	/* set02(���g�p)	*/
#define	M_SSEC_BASEPRM_SET03	352	/* set03(���g�p)	*/
#define	M_SSEC_BASEPRM_SET04	353	/* set04(���g�p)	*/
#define	M_SSEC_BASEPRM_SET05	354	/* set05(���g�p)	*/
#define	M_SSEC_BASEPRM_SET06	355	/* set06	*/
#define	M_SSEC_BASEPRM_SET07	356	/* set07	*/
#define	M_SSEC_BASEPRM_SET08	357	/* set08	*/
#define	M_SSEC_BASEPRM_SET09	358	/* set09	*/
#define	M_SSEC_BASEPRM_SET10	359	/* set10(���g�p)	*/
#define	M_SSEC_BASEPRM_SET11	360	/* set11	*/
#define	M_SSEC_BASEPRM_SET12	361	/* set12	*/
#define	M_SSEC_BASEPRM_SET13	362	/* set13(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET14	363	/* set14(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET15	364	/* set15(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET16	365	/* set16(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET17	366	/* set17	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET18	367	/* set18	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET19	368	/* set19(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET20	369	/* set20(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET21	370	/* set21(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET22	371	/* set22(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET23	372	/* set23(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET24	373	/* set24(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET25	374	/* set25(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET26	375	/* set26(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET27	376	/* set27(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET28	377	/* set28(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET29	378	/* set29(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET30	379	/* set30	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET31	380	/* set31(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET32	381	/* set32(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET33	382	/* set33(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET34	383	/* set34(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET35	384	/* set35(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET36	385	/* set36(���g�p)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_EXT01	400	/* ext01	*/
#define	M_SSEC_BASEPRM_EXT02	401	/* ext02(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT03	402	/* ext03	*/
#define	M_SSEC_BASEPRM_EXT04	403	/* ext04	*/
#define	M_SSEC_BASEPRM_EXT05	404	/* ext05(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT06	405	/* ext06(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT07	406	/* ext07	*/
#define	M_SSEC_BASEPRM_EXT08	407	/* ext08(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT09	408	/* ext09(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT10	409	/* ext10(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT11	410	/* ext11(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT12	411	/* ext12(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT13	412	/* ext13	*/
#define	M_SSEC_BASEPRM_EXT14	413	/* ext14(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT15	414	/* ext15(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT16	415	/* ext16(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT17	416	/* ext17	*/
#define	M_SSEC_BASEPRM_EXT18	417	/* ext18(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT19	418	/* ext19(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT20	419	/* ext20	*/
#define	M_SSEC_BASEPRM_EXT21	420	/* ext21	*/
#define	M_SSEC_BASEPRM_EXT22	421	/* ext22	*/
#define	M_SSEC_BASEPRM_EXT23	422	/* ext23	*/
#define	M_SSEC_BASEPRM_EXT24	423	/* ext24(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT25	424	/* ext25(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT26	425	/* ext26(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT27	426	/* ext27(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT28	427	/* ext28(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT29	428	/* ext29(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT30	429	/* ext30(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT31	430	/* ext31(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT32	431	/* ext32(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT33	432	/* ext33(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT34	433	/* ext34(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT35	434	/* ext35(���g�p)	*/
#define	M_SSEC_BASEPRM_EXT36	435	/* ext36(���g�p)	*/
#define	M_SSEC_BASEPRM_NRFCHK	500	/* ���_�t�ߔ������	*/
#define	M_SSEC_BASEPRM_RETPRG	501	/* �v���O�����ĊJ�������A	*/
#define	M_SSEC_BASEPRM_V1COM_N	502	/* �R�����ϐ�#100-�n�����ʌ�	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_V0COM_N	503	/* �R�����ϐ�#500-�n�����ʌ�	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_INPSTYP	506	/* �����`�F�b�N�w��^�C�v�I��(InpsTyp)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_GTYPE	509	/* �@��؊�(Gtype)	*//* P0Y-A013c */
#define	M_SSEC_BASEPRM_WT_MMIN	510	/* �҂����킹M�R�[�h(�ŏ��l)0,100�`99999999	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_WT_MMAX	511	/* �҂����킹M�R�[�h(�ő�l)0,100�`99999999	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_TBASE	512	/* �H������Ǘ���ԍ�	*/
#define	M_SSEC_BASEPRM_TAPDWL	513	/* �����^�b�v����҂�����	*/
#define	M_SSEC_BASEPRM_TAPINP	514	/* �����^�b�v�p�C���|�W�V������(�^�b�v��)	*/
#define	M_SSEC_BASEPRM_CROSSCOM	516	/* �n���ԃR�����ϐ��Q��(CrossCom)	*//* P1X-A295 */
#define	M_SSEC_BASEPRM_G28_9_OVLP	517	/* G28.9�I�[�o���b�v��	*//* P1X-A402 */
#define	M_SSEC_BASEPRM_CHOP_R	524	/* �`���b�s���O�␳�ʋL���̈�R���W�X�^�擪�ԍ�(chop_R)	*//* P0Y-A013c */
#define	M_SSEC_BASEPRM_PLC_CONST_EXT	526	/* PLC�萔�g���_��	*//* P1X-A020Z */
#define	M_SSEC_BASEPRM_3D_ATC_TYPE	527	/* 3D�H���������	*//* P1X-A020L */
#define	M_SSEC_BASEPRM_TLM_TYPE	528	/* TLM type	*//* P1X-A080 */
#define	M_SSEC_BASEPRM_EMGCNT	529	/* ����~�R���^�N�^�Ւf����	*//* P1X-A157 */
#define	M_SSEC_BASEPRM_MCDP1	530	/* �R���^�N�^�n�����m�f�o�C�X1	*//* P1X-A157 */
#define	M_SSEC_BASEPRM_MCDP2	531	/* �R���^�N�^�n�����m�f�o�C�X2	*//* P1X-A157 */
#define	M_SSEC_BASEPRM_F_BUS_INIT_DELAY	532	/* Fieldbus�ʐM�G���[��������	*//* P1X-A164 */
#define	M_SSEC_BASEPRM_LMC_RESTRAIN	533	/* G00 &�n���h�����莞���X�g���[�V�����␳�}��	*//* P1X-A237 */
#define	M_SSEC_BASEPRM_DIDOREFRESH	534	/* DI/DO�̃��t���b�V���Ԋu	*//* P1X-A252X */
#define	M_SSEC_BASEPRM_MAN_SMG	535	/* �蓮����������؊�	*//* P1X-A283 */
#define	M_SSEC_BASEPRM_N400VALTYPE	536	/* #400�ԑ�ϐ��^�C�v	*//* P1X-A099AJ */
#define	M_SSEC_BASEPRM_REVSVTRG	538	/* �C�Ӌt�s�f�[�^�ۑ��g���K�؊���	*//* P1X-A303 */
#define	M_SSEC_BASEPRM_MCDP3	539	/* �R���^�N�^�n�����m�f�o�C�X3	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_MCDP4	540	/* �R���^�N�^�n�����m�f�o�C�X4	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_SSC_RIO	541	/* ���S�Ď������[�gI/O�ڑ�	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_ALMDLY	542	/* �A���[���\���x������	*//* P1X-A409 */
#define	M_SSEC_BASEPRM_DOOR1	549	/* �h�A1�X�C�b�`���̓f�o�C�X	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_DOOR2	550	/* �h�A2�X�C�b�`���̓f�o�C�X	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_MCCT1	553	/* �R���^�N�^�Ւf�o��1�f�o�C�X	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_MCHKT1	557	/* �R���^�N�^����m�F�`�F�b�N���e����1	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_PLCUNIT	600	/* PLC�P��	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_PLCPLCUNIT	601	/* PLC�P��(PLC)	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_MCMPUNIT	602	/* �@�B�덷�␳�P��	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_PLCMCMPUNIT	603	/* �@�B�덷�␳�P��(PLC)	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_SYSTEMTYPE	1007	/* �@�B�^�C�v�I��	*//* P1X-A252M */
#define	M_SSEC_BASEPRM_NORIOCHK	1163	/* RIO���ڑ����m����	*//* P1X-A120A */
#define	M_SSEC_BASEPRM_ATS	1164	/* ATS�@�\�L��	*//* P1X-A145 */
#define	M_SSEC_BASEPRM_AUX_ACC	1361	/* �⏕���X�����	*//* P1X-A299 */
#define	M_SSEC_BASEPRM_MANUALF_TYPE 	1365	/* �蓮���x�w�߃^�C�v	*//* P1X-A158d */
#define	M_SSEC_BASEPRM_SKIPEXTYP	1366	/* ���n�������X�L�b�v�w�ߑI��	*//* P1X-B588A */
#define	M_SSEC_BASEPRM_G1ACCOVRMAX	1367	/* �؍푗��X�����������p�I�[�o���C�h�ő�l	*//* P1X-A455 */
#define	M_SSEC_BASEPRM_POLYAX	1501	/* ��]�H��̐��䎲�ԍ�	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_G0IPFG	1502	/* G1��G0�����`�F�b�N	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_G1IPFG	1503	/* G1��G1�����`�F�b�N	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CKREF2	1505	/* ��2���_���A�`�F�b�N�؊���	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_F1FM	1506	/* F1�����葬�x����l	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_F1CONST	1507	/* F1�����葬�x�ω��萔	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DOORH	1510	/* �h�A�C���^���b�N�U����~���ԒZ�k�؊���	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DOORPM	1511	/* �n���ʃh�A�C���^���b�N�U�p�M�����̓f�o�C�X1	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DOORPS	1512	/* �n���ʃh�A�C���^���b�N�U�p�M�����̓f�o�C�X2	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_STAPM	1513	/* �����^�b�v�I��pM�R�[�h	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_EXP_LINAX	1514	/* �w���֐���Ԃ��s������������('A'�`'Z')	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_EXP_ROTAX	1515	/* �w���֐���Ԃ��s����]������('A'�`'Z')	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_AX	1516	/* ���Ճ~�[�����O��]���ԍ�	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_C	1517	/* ���Ճ~�[�����O��]������ 0:Y�� 1:C��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_POLM	1518	/* �厲�|���S������ԍ�	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_POLS	1519	/* �厲�|���S���������ԍ�	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_TCHG34	1520	/* �t�����H��␳�I��p�p�����[�^	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_C_MIN	1521	/* ����ŏ��p(C_min)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_AXIS	1522	/* �@�����䎲(C_axis)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_FEED	1523	/* �@�����䎲���񑬓x(C_feed)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_TYPE	1524	/* �@������^�C�v(C_type)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_PAX	1533	/* �~�[�����O ������	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_SNG44_1	1534	/* G44.1�w�ߎ��̎厲�ԍ�	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_C_LENG	1535	/* ����ŏ��ړ���(C_leng)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX1	1537	/* ��1���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX2	1538	/* ��2���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX3	1539	/* ��3���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX4	1540	/* ��4���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX5	1541	/* ��5���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX6	1542	/* ��6���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX7	1543	/* ��7���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX8	1544	/* ��8���ƍ������䂷�鎲��	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_3DCDC	1561	/* 3�������W�ϊ������[�N���W�\���؊�	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_3DREMC	1562	/* 3�������W�ϊ����c�w�ߕ\���؊�	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_3DCDRC	1563	/* 3�������W�ϊ������W�ǎ�؊�	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_3DSPD	1564	/* 3�������W�ϊ������������x	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_HELGEAR	1565	/* �͂��Ή��H���	*//* P1X-A304 */
#define	M_SSEC_BASEPRM_3DSPDSLCT	1566	/* 3�������W�ϊ����������������蓮�샂�[�h�I��	*//* P1X-A059U */
#define	M_SSEC_BASEPRM_SFILTG1	1568	/* G01 S���t�B���^	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_SFILTG0	1569	/* G00 S���t�B���^	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_SFILT2	1570	/* S���t�B���^�Q�i��Ԍ�t�B���^�j	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_SSSDIS	1571	/* SSS���� �`��F���͈͂��Œ艻	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_CIRORP	1572	/* �~�ʃu���b�N�I�[�o���b�v�L��	*//* P0Y-A013N P1X-A020 */
#define	M_SSEC_BASEPRM_RET1	1573	/* ���A�^�C�v�P	*//* P1X-A071 */
#define	M_SSEC_BASEPRM_RET2	1574	/* ���A�^�C�v�Q	*//* P1X-A071 */
#define	M_SSEC_BASEPRM_ANIAXDIR	1590	/* Animate ax direct	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_ANIAX1	1591	/* Animate ax-1	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_ANIAX2	1592	/* Animate ax-2	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_ANIAX3	1593	/* Animate ax-3	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_HACCC	1801	/* �~�ʔ��a�N�����v�����x(Hacc_c)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_MACCC	1802	/* �����x���蒆��(Macc_c)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_LACCC	1803	/* �����x����ᑬ(Lacc_c)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_HCOFA	1811	/* X���������x�W����(Hcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_HCOFB	1812	/* X���������x�W����(Hcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_MCOFA	1813	/* X���������x�W����(Mcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_MCOFB	1814	/* X���������x�W����(Mcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_LCOFA	1815	/* X��������x�W����(Lcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_LCOFB	1816	/* X��������x�W����(Lcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_MAGC	1817	/* X���ύX�{����(mag_C)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_HCOFA	1821	/* Y���������x�W����(Hcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_HCOFB	1822	/* Y���������x�W����(Hcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_MCOFA	1823	/* Y���������x�W����(Mcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_MCOFB	1824	/* Y���������x�W����(Mcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_LCOFA	1825	/* Y��������x�W����(Lcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_LCOFB	1826	/* Y��������x�W����(Lcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_MAGC	1827	/* Y���ύX�{����(mag_C)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_STNAD	1901	/* station addr	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_INSIZ	1902	/* Din  size	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_OTSIZ	1903	/* Dout size	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DLENG	1904	/* data length	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_BRATE	1905	/* baud rate	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_STPBT	1906	/* stop bit	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_PRITY	1907	/* parity check	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_EVPTY	1908	/* even parity	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_TIMIN	1909	/* Tout (ini)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_TIMRN	1910	/* Tout (run)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CLOCK	1911	/* clock select	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_WCOUNTM	8001	/* ���[�N���H��M	*/
#define	M_SSEC_BASEPRM_WCOUNT	8002	/* ���[�N���H��	*/
#define	M_SSEC_BASEPRM_WCOUNTMAX	8003	/* ���[�N�ő�l	*/
#define	M_SSEC_BASEPRM_PG37F	8004	/* �����H�����v�����x	*/
#define	M_SSEC_BASEPRM_PG37R	8005	/* �����H����茸���̈�r	*/
#define	M_SSEC_BASEPRM_PG37D	8006	/* �����H����茸���̈�d	*/
#define	M_SSEC_BASEPRM_OVRIDE	8007	/* �����R�[�i�I�[�o���C�h	*/
#define	M_SSEC_BASEPRM_ANGLE	8008	/* �����R�[�i�I�[�o���C�h�ő�p�x	*/
#define	M_SSEC_BASEPRM_INN	8009	/* �����R�[�i�I�[�o���C�h�R�[�i�O����	*/
#define	M_SSEC_BASEPRM_MAMOU1	8010	/* ���Ճf�[�^�ő�l	*/
#define	M_SSEC_BASEPRM_MAMOU2	8011	/* ���Ճf�[�^�ő���Z�l	*/
#define	M_SSEC_BASEPRM_G73	8012	/* G73�߂�	*/
#define	M_SSEC_BASEPRM_G83	8013	/* G83�߂�	*/
#define	M_SSEC_BASEPRM_CHANF	8014	/* �`�����t�@��	*/
#define	M_SSEC_BASEPRM_G78	8015	/* �p�x	*/
#define	M_SSEC_BASEPRM_AMARI	8016	/* G71�ŏ��؍�	*/
#define	M_SSEC_BASEPRM_LAPDLT	8017	/* �؍��ω�	*/
#define	M_SSEC_BASEPRM_PEKRVM	8018	/* G84/G74�߂�	*/
#define	M_SSEC_BASEPRM_RCOMP	8019	/* ���x�W��	*/
#define	M_SSEC_BASEPRM_FCORN	8020	/* �R�[�i�����p�x	*/
#define	M_SSEC_BASEPRM_RCOMP_CHG	8021	/* ���x�W������	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_RCOMP1	8022	/* �R�[�i���x�W��	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_RCOMP2	8023	/* �Ȑ����x�W��	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_SPLINE	8025	/* �����x�X�v���C���L��	*/
#define	M_SSEC_BASEPRM_SPCAN_ANGL	8026	/* �L�����Z���p�x	*/
#define	M_SSEC_BASEPRM_DISTTH1	8027	/* ���덷1	*/
#define	M_SSEC_BASEPRM_DISTTH2	8028	/* ���덷2	*/
#define	M_SSEC_BASEPRM_MINLENG	8029	/* ������	*/
#define	M_SSEC_BASEPRM_MINUTE	8030	/* ����������	*/
#define	M_SSEC_BASEPRM_FAIRING_ON	8033	/* �t�F�A�����O�L��	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_ACCCLAMP_ON	8034	/* �����x�N�����v�L��	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_ACCCLAMP_MAG	8035	/* �����x�N�����v�{��	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_CORDEC_JUDGE	8036	/* �R�[�i����؊�	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_CORDEC_JUDGE_L	8037	/* �R�[�i���蒷	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_C_ROTR	8041	/* C������a	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_CONR	8042	/* C���}���a	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_HDL_OFS	8043	/* �n���h���␳��	*//* P1X-A062 */
#define	M_SSEC_BASEPRM_PRUNIT10PRM	8044	/* �w�ߒP�ʂP�O�{	*//* P1X-A061 */
#define	M_SSEC_BASEPRM_LAPCUT	8051	/* G71�؍���	*/
#define	M_SSEC_BASEPRM_G71	8052	/* G71����	*/
#define	M_SSEC_BASEPRM_LAPX	8053	/* G73���X	*/
#define	M_SSEC_BASEPRM_LAPZ	8054	/* G73���Z	*/
#define	M_SSEC_BASEPRM_LAPCT	8055	/* G73��	*/
#define	M_SSEC_BASEPRM_G74	8056	/* G74�߂�	*/
#define	M_SSEC_BASEPRM_G76	8057	/* G76�d�グ��	*/
#define	M_SSEC_BASEPRM_G76CT	8058	/* G76��	*/
#define	M_SSEC_BASEPRM_G76AN	8059	/* G76�˂��R	*/
#define	M_SSEC_BASEPRM_P3D	8071	/* 3�����␳	*/
#define	M_SSEC_BASEPRM_SCALE	8072	/* �X�P�[�����O�{��	*/
#define	M_SSEC_BASEPRM_SPIRAL_ERR	8075	/* �Q��Q,K�����w�ߎ��I�_�덷(�^�C�v2)	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_SCRN_TIME	8078	/* �X�N���[���Z�[�o�[����	*//* P0Y-A013c */
#define	M_SSEC_BASEPRM_G68ANGLE	8081	/* G�w�߉�]�p	*//* P1X-A483 */
#define	M_SSEC_BASEPRM_G68FLAG	8082	/* G68.1�p�x����	*//* P1X-A483 */
#define	M_SSEC_BASEPRM_G83SMCOD	8083	/* G83���a���[�hM�R�[�h	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G83SCLRN	8084	/* G83���a�N���A�����X��	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G83SFWD_F	8085	/* G83���a�؍�J�n�ʒu���葬�x	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G83SBAK_F	8086	/* G83���a�߂葬�x	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_SSS_ON	8090	/* SSS����L��	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_STDLENGTH	8091	/* �����	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_CLAMP_COEFF	8092	/* �N�����v���x�W��	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_STEP_LENGTH	8093	/* �i����	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_DCC_WAIT_ADD	8094	/* �����\������	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_MACSINGLE	8101	/* �}�N���V���O��	*/
#define	M_SSEC_BASEPRM_COLLALMOFF	8102	/* �����	*/
#define	M_SSEC_BASEPRM_COLLCHKOFF	8103	/* ���`�F�b�N����	*/
#define	M_SSEC_BASEPRM_EDTLCKB	8105	/* �ҏW���b�NB	*/
#define	M_SSEC_BASEPRM_G46ERR	8106	/* G46���]���G���[���	*/
#define	M_SSEC_BASEPRM_MCERRRAD	8107	/* ���a�덷�␳	*/
#define	M_SSEC_BASEPRM_CNGMCERRRAD	8108	/* ���a�덷�␳�؊�	*/
#define	M_SSEC_BASEPRM_HOSTLNK	8109	/* ��ʒʐM	*/
#define	M_SSEC_BASEPRM_POCKET_ON	8110	/* G71/G72�|�P�b�g���H�I��	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_MILL_R	8111	/* �~�[�����O���a�l�w��	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G04P	8112	/* G04P�����_�L��	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_INIG16	8113	/* �~�[�����O�C�j�V����G16	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_MILL_INIG19	8114	/* �~�[�����O�C�j�V����G19	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_COORDOFF	8116	/* ���W��]�p������	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_OFSDIAM	8117	/* �a�␳���a�w��L��	*//* P1X-A170B */
#define	M_SSEC_BASEPRM_COMPUNITSWITCH	8119	/* �␳�ʐݒ�P�ʐ؊�	*//* P1X-A203B */
#define	M_SSEC_BASEPRM_FONTSELECT	8120	/* �t�H���g�I��	*//* P1X-A333n */
#define	M_SSEC_BASEPRM_SCRNCAP	8121	/* �X�N���[���L���v�`��	*//* P1X-A301 */
#define	M_SSEC_BASEPRM_KEEP_G43	8122	/* �蓮R�_���AG43�ێ�(M��p)	*//* P1X-A320 */
#define	M_SSEC_BASEPRM_DRIL_QR	8123	/* ���������߂��L��	*//* P1X-A318 */
#define	M_SSEC_BASEPRM_RST_MR	8124	/* ���Z�b�g���̃~���[����	*//* P1X-B496 */
#define	M_SSEC_BASEPRM_G84_S	8125	/* G84 S�w�߃`�F�b�N�L��	*//* P1X-A365 */
#define	M_SSEC_BASEPRM_BUZZER_OFF	8126	/* ���쉹����(Disable op tone)	*//* P1X-A398 */
#define	M_SSEC_BASEPRM_RNAVI_MANUAL_CRD	8127	/* R-Navi�蓮������W	*//* P1X-A451S */
#define	M_SSEC_BASEPRM_UPRM_F1	8145	/* #8145 F1������L��	*//* P1X-A006AQ */
#define	M_SSEC_BASEPRM_EXTDCC_AX	8154	/* �O���������Ή��L��	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_SUBPRO_INTER	8155	/* �T�u�v���^���荞��	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_FINE_THRECUT_E	8156	/* �����˂��؂�E	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_COMP_TYPE_B	8157	/* �␳�^�C�vB (M�n:�a�␳�AL�n�F�n��␳)	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_INITCONST_SUR_SPD	8158	/* �C�j�V�����������	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_SYNTAP	8159	/* �����^�b�v	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_STARTP_ALARM	8160	/* �X�^�[�g�_�A���[��	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_HOLD_INTR_AMOUNT	8173	/* �����ݗʕێ�	*//* P1X-B551 */
#define	M_SSEC_BASEPRM_LKYOKO	8621	/* ���W��]  ����(��������)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKTATE	8622	/* ���W��]  ����(�c������)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKCENTY	8623	/* ���W��]���S���W(����)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKSENTT	8624	/* ���W��]���S���W(�c��)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKYOKOL	8625	/* ���W��]  �x�N�g��(����)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKTATEL	8626	/* ���W��]  �x�N�g��(�c��)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKKAKUDO	8627	/* ���W��]�p�x	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_TOOL_LEN	8701	/* �Z���T��	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_TOOL_DIA	8702	/* �Z���T���a	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_OFFSET_X	8703	/* ���S�␳�ʁ@��	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_OFFSET_Y	8704	/* ���S�␳�ʁ@�c	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_RETURN	8705	/* �߂��	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_FEED	8706	/* ���葬�x	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_SKIP_PAST_H	8707	/* �X�L�b�v����ʁi�����j	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_SKIP_PAST_V	8708	/* �X�L�b�v����ʁi�c���j	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_WORK_SIN_CHG	8709	/* �O�����[�N�������]	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_WORK_INVA	8710	/* �O�����[�N�I�t�Z�b�g����	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_TLM_L_MEAS_AXIS	8711	/* �H��v�������莲	*//* P1X-A080 */
#define	M_SSEC_BASEPRM_TLM_M_MEAS_AXIS	8712	/* �H��v���a���莲	*//* P1X-A080 */
#define	M_SSEC_BASEPRM_SKIP_COORD_SW	8713	/* �X�L�b�v���W�ؑ�	*//* P1X-A332U */
#define	M_SSEC_BASEPRM_D0DEV	8880	/* �T�u�v���i�[��D0:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D0DIR	8881	/* �T�u�v���i�[��D0:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D1DEV	8882	/* �T�u�v���i�[��D1:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D1DIR	8883	/* �T�u�v���i�[��D1:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D2DEV	8884	/* �T�u�v���i�[��D2:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D2DIR	8885	/* �T�u�v���i�[��D2:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D3DEV	8886	/* �T�u�v���i�[��D3:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D3DIR	8887	/* �T�u�v���i�[��D3:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D4DEV	8888	/* �T�u�v���i�[��D4:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D4DIR	8889	/* �T�u�v���i�[��D4:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D0_SRCH_ODR	8890	/* �T�u�v���T�[�`��D0	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D1_SRCH_ODR	8891	/* �T�u�v���T�[�`��D1	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D2_SRCH_ODR	8892	/* �T�u�v���T�[�`��D2	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D3_SRCH_ODR	8893	/* �T�u�v���T�[�`��D3	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D4_SRCH_ODR	8894	/* �T�u�v���T�[�`��D4	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_G_CODE_FORMAT	10001	/* G�R�[�h�t�H�[�}�b�g	*/
#define	M_SSEC_BASEPRM_M2_LABEL_O	10002	/* M2���x��O	*/
#define	M_SSEC_BASEPRM_M2_MACRO_CONVERT	10003	/* M2�}�N���R���o�[�^�L��	*/
#define	M_SSEC_BASEPRM_COORD_ANGL	10004	/* ���W��]�p�x	*/
#define	M_SSEC_BASEPRM_COORD_ROT_CENTER_H	10005	/* ���W��]���S���W(��)	*/
#define	M_SSEC_BASEPRM_COORD_ROT_CENTER_V	10006	/* ���W��]���S���W(�c)	*/
#define	M_SSEC_BASEPRM_PASSWD	10007	/* �@�B���[�J�}�N���Ïؔԍ�	*/
#define	M_SSEC_BASEPRM_M3MPAR1	10008	/* M3/L3�p�p�����[�^(m3mpar1)	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT1	10009	/* operat1	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT2	10010	/* operat2	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT3	10011	/* operat3	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT5	10012	/* operat5	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT7	10013	/* operat7	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_MASMAC5	10035	/* masmac5	*//* P0Y-A013E */
#define	M_SSEC_BASEPRM_CHRCOMP	10100	/* �ϊ����ԑO�덷��(#8019�J�b�R�j	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_CHRCOMP2	10101	/* �Ȑ����x�W���̕ϊ����ԑO�덷��(#8023�J�b�R�j	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_APC_TYPE	11001	/* APC��ʕ\���^�C�v�I��	*//* P1X-A166 */
#define	M_SSEC_BASEPRM_VALID_PALLET_NUM	11002	/* �p���b�g���ݒ�	*//* P1X-A166 */
#define	M_SSEC_BASEPRM_APLC	11003	/* APLC�L��/����(APLC valid)	*//* P1X-A167 */
#define	M_SSEC_BASEPRM_PLCAUTO	11004	/* PLC�N���^�C�~���O�؂�ւ�(PLCautorun enable)	*//* P1X-A014A */
#define	M_SSEC_BASEPRM_HD_IPADDR	11005	/* ���H�v���O�������i�[����Ă���PC��IP�A�h���X	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_HD_PORTNUMBER	11006	/* ���H�v���O�������i�[����Ă���PC�̃|�[�g�ԍ�	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_HD_TIMEOUT	11007	/* ���H�v���O�������i�[����Ă���PC�̃^�C���A�E�g����	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_HD_CACHE	11008	/* HD�^�]�p�L���b�V���ݒ�	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_SW_KEYBOARD	11010	/* �\�t�g�E�F�A�L�[�{�[�h	*//* P1X-A006AH */
#define	M_SSEC_BASEPRM_HANDYTERMINAL_PW	11011	/* �n���f�B�^�[�~�i���p�X���[�h	*//* P1X-A193 */
#define	M_SSEC_BASEPRM_AX16MD	11012	/* 1�`�����l��16���ڑ��ݒ�	*//* P1X-A008h */
#define	M_SSEC_BASEPRM_3D_MCHK	11013	/* 3D�@�B���`�F�b�N����	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_CHK_LEN1	11014	/* 1�i�K�ڂ̊��`�F�b�N����	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_CHK_LEN2	11015	/* 2�i�K�ڂ̊��`�F�b�N����	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_EXPAND_RATE	11016	/* 3D�@�B���`�F�b�N�@�`��c��܂���	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_TOFS_RUNNING	11017	/* �����^�]���H��␳�ʐݒ�L��(T-ofs set at run)	*//* P1X-A203C */
#define	M_SSEC_BASEPRM_M_PW_HOLD	11018	/* �}�V�����[�U�p�X���[�h�ێ� 	*//* P1X-A020AS */
#define	M_SSEC_BASEPRM_2SYS_DISPLAY	11019	/* 2�n�������\���L��	*//* P1X-A322 */
#define	M_SSEC_BASEPRM_PLC_MESG_TYPE	11021	/* PLC���b�Z�[�W�\���`���ؑ�(PLC mesg disp type)	*//* P1X-A006BB */
#define	M_SSEC_BASEPRM_SRAM_OUT_TYPE	11022	/* SRAM�o�͌`��	*//* P1X-A395 */
#define	M_SSEC_BASEPRM_G33_1_DRN	11023	/* G33.1�h���C����	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_G33_1_FHD	11024	/* G33.1�t�B�[�h�z�[���h	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_TOLE_ARC_CENT	11028	/* �~�ʒ��S�덷�C�����e�l	*//* P1X-B523 */
#define	M_SSEC_BASEPRM_ARC_TO_G1	11029	/* �~�ʒ��S�w��Ȃ��~�ʁ|�����u������	*//* P1X-B522 */
#define	M_SSEC_BASEPRM_MANTAPSYNCCANCL	11030	/* �蓮�����^�b�v����������	*//* P1X-B548 */
#define	M_SSEC_BASEPRM_CURSOR_POS_SRCH	11031	/* �J�[�\���ʒu�T�[�`	*//* P1X-A020AV */
#define	M_SSEC_BASEPRM_MENU_SEL_PARA	11032	/* ���j���[�I���p�����[�^�ݒ�֎~	*//* P1X-A358 */
#define	M_SSEC_BASEPRM_SKPB_NO_SENS	11033	/* B�ړ_���������Z���T���I��	*//* P1X-A382 */
#define	M_SSEC_BASEPRM_G12ADDRCHECKTYPE	11034	/* �~�؍�w�߃A�h���X�`�F�b�N�^�C�v	*//* P1X-A406 */
#define	M_SSEC_BASEPRM_SYS_CHG_LMT	11035	/* �n���֑ؑ��쐧��	*//* P1X-A413 */
#define	M_SSEC_BASEPRM_MEAS_DIR_JUDGE	11036	/* �蓮�v����������s���ѕ�	*//* P1X-A349A */
#define	M_SSEC_BASEPRM_RNAVI_INDEX_TYPE	11037	/* R-Navi ���H�ʊ���o������	*//* P1X-A451Q */
#define	M_SSEC_BASEPRM_MBTANAXH	12001	/* �蓮���葬�xB�������䒼���n�������́i���j	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBTANAXV	12002	/* �蓮���葬�xB�������䒼���n�������́i�c�j	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBROTCH	12003	/* �蓮���葬�xB���������]���S�@�B�ʒu�i���j	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBROTCV	12004	/* �蓮���葬�xB���������]���S�@�B�ʒu�i�c�j	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MFIG	12005	/* M��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_MBIN	12006	/* M�o�C�i��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_SFIG	12007	/* S��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_SBIN	12008	/* S�o�C�i��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_TFIG	12009	/* T��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_TBIN	12010	/* T�o�C�i��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_BFIG	12011	/* B��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_BBIN	12012	/* B�o�C�i��	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_G33_1_ROT_NAME	12013	/* G33.1��]������	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_G33_1_OVR	12014	/* G33.1�I�[�o���C�h	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_SYNTAP_SCANCEL	19001	/* �����^�b�v(,S)�L�����Z��	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_ZEROPOINT_MARK	19002	/* ���_�}�[�N�̕\���ʒu	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_PRGCRDROT_TYPE	19003	/* PRG���W��]�^�C�v	*//* P1X-B396A */
#define	M_SSEC_BASEPRM_MAXSYNCTAP_F	19004	/* �����^�b�v�ő�؍푗�葬�x�w�ߔ͈͐���	*//* P1X-A363 */
#define	M_SSEC_BASEPRM_MANUALF2_CLAMP	19005	/* �蓮���x�w��2�N�����v���x(%)	*//* P1X-A158d */
#define	M_SSEC_BASEPRM_EOR_DISABLE	19006	/* EOR����	*//* P1X-A482 */
#define	M_SSEC_BASEPRM_G33_1_CUTUP_SPD	19401	/* G33.1�؂�グ���x	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_ROT_AX_DRAW	19405	/* �O���t�B�b�N��]���`��	*//* P1X-A020BP */
#define	M_SSEC_BASEPRM_FIXCYCLE_CUTTIME	19417	/* �������T�C�N�����ԒZ�k	*//* P1X-A519 */
#define	M_SSEC_BASEPRM_MBRSTDR1	19425	/* �����������a1	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBRSTDF1	19426	/* �����������x1	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBRSTDR2	19427	/* �����������a2	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBRSTDF2	19428	/* �����������x2	*//* P1X-A111 */

/* ���p�����[�^/PLC���p�����[�^	*/
#define	M_SSEC_AXISPRM_NAME	1	/* ������	*/
#define	M_SSEC_AXISPRM_DSP_NAME	2	/* �\���p������	*/
#define	M_SSEC_AXISPRM_INCNAME	3	/* �����w�ߎ��� 	*/
#define	M_SSEC_AXISPRM_CS	4	/* �w�ߒP��	*/
#define	M_SSEC_AXISPRM_IOUT	5	/* �C���`�o�� 	*/
#define	M_SSEC_AXISPRM_ROT	6	/* ��]��	*/
#define	M_SSEC_AXISPRM_CCW	7	/* ���[�^ccw	*/
#define	M_SSEC_AXISPRM_DIA	8	/* ���a�w�莲	*/
#define	M_SSEC_AXISPRM_SPAX	9	/* �厲���	*/
#define	M_SSEC_AXISPRM_MCP_NO	10	/* �A���v�C���^�t�F�[�X�`�����l���ԍ�	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_CRS_ADR	12	/* �������̎w�߃A�h���X	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_CRS_INC	13	/* �������̑����w�߃A�h���X	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_INTABS	101	/* �蓮ABS�X�V	*/
#define	M_SSEC_AXISPRM_TCOMP	102	/* �H��␳�@�\	*/
#define	M_SSEC_AXISPRM_MANDOG	103	/* �蓮�h�O��	*/
#define	M_SSEC_AXISPRM_SVOF	104	/* �덷�C��	*/
#define	M_SSEC_AXISPRM_JOGH	105	/* JOG�������^�C�v	*/
#define	M_SSEC_AXISPRM_JOGHP	106	/* JOG�N��(+)�f�o�C�X�I��	*/
#define	M_SSEC_AXISPRM_JOGHN	107	/* JOG�N��(-)�f�o�C�X�I��	*/
#define	M_SSEC_AXISPRM_TSLVNO	108	/* �X���[�u���ԍ�	*/
#define	M_SSEC_AXISPRM_NO_DSP	109	/* No_dsp	*/
#define	M_SSEC_AXISPRM_AXOFF	110	/* �����O��	*/
#define	M_SSEC_AXISPRM_JOGD	111	/* �}JOG�N���M���f�o�C�X��	*/
#define	M_SSEC_AXISPRM_CHOP_AX	112	/* �`���b�s���O�w�莲	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_OUTUNIT	1010	/* �o�͒P��(�T�[�{)	*//* P1X-A070 */
#define	M_SSEC_AXISPRM_REF_SYN	1493	/* ���_�m�葀�쓯�� 	*//* P1X-A106H */
#define	M_SSEC_AXISPRM_DSP_AX_CHG	1494	/* �J�E���^�\��������	*//* P1X-A315 */
#define	M_SSEC_AXISPRM_GRF_AX_DIR	1495	/* 2D�O���t�B�b�N���ړ�����	*//* P1X-A020BH */
#define	M_SSEC_AXISPRM_RAPID	2001	/* Rapid	*/
#define	M_SSEC_AXISPRM_CRUMP	2002	/* �؍푗��N�����v���x	*/
#define	M_SSEC_AXISPRM_SMGST	2003	/* ���������[�h	*/
#define	M_SSEC_AXISPRM_LG0T	2004	/* G0���萔(���j�A),   �\�t�g1�i��	*/
#define	M_SSEC_AXISPRM_G0T	2005	/* G0���萔(1���x��),�\�t�g2�i��	*/
#define	M_SSEC_AXISPRM_G02T	2006	/* G0���萔(�\�t�g)  (M7���g�p)	*/
#define	M_SSEC_AXISPRM_LG1T	2007	/* G1���萔(���j�A),   �\�t�g1�i��	*/
#define	M_SSEC_AXISPRM_G1T	2008	/* G1���萔(1���x��),�\�t�g2�i��	*/
#define	M_SSEC_AXISPRM_G12T	2009	/* G1���萔(�\�t�g)  (M7���g�p)	*/
#define	M_SSEC_AXISPRM_FFGAIN	2010	/* �t�B�[�h�t�H���[�h�Q�C��	*/
#define	M_SSEC_AXISPRM_G0BACK	2011	/* G0 �o�b�N ���b�V	*/
#define	M_SSEC_AXISPRM_G1BACK	2012	/* G1 �o�b�N ���b�V	*/
#define	M_SSEC_AXISPRM_STLIM_MIN	2013	/* �\�t�g���~�b�g-(SW OT-)	*/
#define	M_SSEC_AXISPRM_STLIM_MAX	2014	/* �\�t�g���~�b�g-(SW OT+)	*/
#define	M_SSEC_AXISPRM_TLMLN	2015	/* �c�[���Z�b�^�|�����Z���T �܂��� TLM�����	*/
#define	M_SSEC_AXISPRM_TLMLP	2016	/* �c�[���Z�b�^�{�����Z���T	*/
#define	M_SSEC_AXISPRM_TAPGAINM	2017	/* ���T�[�{�Q�C��	*/
#define	M_SSEC_AXISPRM_NOSRV	2018	/* �T�[�{�Ȃ��^�]	*/
#define	M_SSEC_AXISPRM_REVNUM	2019	/* �߂�����	*/
#define	M_SSEC_AXISPRM_OCHKP	2020	/* ��2���_���A�厲�I���G���g�����`�F�b�N�ʒu	*/
#define	M_SSEC_AXISPRM_OUTF	2021	/* �\�t�g���~�b�g�͈͊O�ő呬�x	*/
#define	M_SSEC_AXISPRM_G30SLX	2022	/* �\�t�g���~�b�g����(�������蓮)	*/
#define	M_SSEC_AXISPRM_OZFMIN	2023	/* ATC���x�����ݒ�	*/
#define	M_SSEC_AXISPRM_SYNERR	2024	/* �덷���e�l	*/
#define	M_SSEC_AXISPRM_MLIMIT1BL	2061	/* �\�t�g���~�b�gIB-	*//* P1X-A006 */
#define	M_SSEC_AXISPRM_MLIMIT1BU	2062	/* �\�t�g���~�b�gIB+	*//* P1X-A006 */
#define	M_SSEC_AXISPRM_MOT1TYPE	2063	/* �\�t�g���~�b�gIB�^�C�v	*//* P1X-A006 */
#define	M_SSEC_AXISPRM_FFGAING0	2068	/* G00�t�B�[�h�t�H���[�h�Q�C��	*/
#define	M_SSEC_AXISPRM_MRCKAX	2069	/* �e���~�ʔ��a�덷�␳�W��	*/
#define	M_SSEC_AXISPRM_DIVRT	2070	/* ��]��������	*/
#define	M_SSEC_AXISPRM_SAXNO	2071	/* �X�Ύ��I��	*/
#define	M_SSEC_AXISPRM_RSLIMIT	2072	/* �ĊJ���~�b�g	*/
#define	M_SSEC_AXISPRM_ZRNDOG	2073	/* ���_�h�O	*/
#define	M_SSEC_AXISPRM_HWOTP	2074	/* H/W OT+	*/
#define	M_SSEC_AXISPRM_HWOTN	2075	/* H/W OT-	*/
#define	M_SSEC_AXISPRM_INDEXX	2076	/* �C���f�b�N�X�e�[�u�����o����	*/
#define	M_SSEC_AXISPRM_G0INPS	2077	/* G0�C���|�W�V������(G0inps)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_G1INPS	2078	/* G1�C���|�W�V�������iG1inps)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_CHCOMP	2079	/* �`���b�s���O�␳��(�p�����[�^�l)(chcomp)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_CHWID	2080	/* �`���b�s���O�␳�ʌv�Z�ŏ��l (chwid)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_CHCLSP	2081	/* �`���b�s���O�ō����x(chclsp)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_A_RSTAX	2082	/* �����ĊJ�ʒu���A���̕��A����	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_G60_AX	2084	/* ������ʒu���ߎ��I��	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_SYNCNT	2087	/* �����d������̎����ݒ�(syncnt�j	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_BSAX_SY	2088	/* ��������̊��(bsax_sy�j	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_BSAX_PL	2089	/* �d������̊��(bsax_pl�j	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLRAPID	2090	/* �d�����䒆�̑����葬�x(plrapid�j	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLCLAMP	2091	/* �d�����䒆�̐؍푗��N�����v���x(plclamp)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG0TL	2092	/* �d�����䒆��G0���萔 - ���j�A(plG0tL)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG0T1	2093	/* �d�����䒆��G0���萔 - �ꎞ�x��(plG0tl)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG1TL	2094	/* �d�����䒆��G1���萔 - ���j�A(plG1tL)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG1T1	2095	/* �d�����䒆��G1���萔 - �ꎞ�x��(plG1tl)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_CRNCSP	2096	/* �R�[�i�����Œᑬ�x	*//* P0Y-A042A */
#define	M_SSEC_AXISPRM_TLMSUBLN	2097	/* �c�[���Z�b�^ �T�u�� �Z���T�ʒu�|	*//* P1X-A070 */
#define	M_SSEC_AXISPRM_TLMSUBLP	2098	/* �c�[���Z�b�^ �T�u�� �Z���T�ʒu�{	*//* P1X-A070 */
#define	M_SSEC_AXISPRM_LSKPT	2102	/* �X�L�b�v���萔(���j�A)	*//* P0Y-A096 */
#define	M_SSEC_AXISPRM_SKPT	2103	/* �X�L�b�v���萔(1���x��)	*//* P0Y-A096 */
#define	M_SSEC_AXISPRM_INDEX_UNIT	2106	/* ����o���P��	*//* P1X-A060 */
#define	M_SSEC_AXISPRM_RAPID_HIMOD	2109	/* �����x���䃂�[�h�p�����葬�x	*//* P1X-A064 */
#define	M_SSEC_AXISPRM_CLAMP_HIMOD 	2110	/* �����x���䃂�[�h�p�؍�N�����v���葬�x	*//* P1X-A065 */
#define	M_SSEC_AXISPRM_BLF_VALID	2111	/* �ی��ˋN�␳�L��	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_MI	2112	/* ���[�^�C�i�[�V��	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_VF	2113	/* �S�����C	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_FWDG	2114	/* �␳�e�e�Q�C��	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_ST	2115	/* ���[�^�X�g�[���g���N	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_SSCDRSEL	2118	/* ���x�Ď��h�A�I��	*//* P1X-A157 */
#define	M_SSEC_AXISPRM_BKVALID	2121	/* �σo�b�N���b�V�����^�L���^�A����/�σo�b�N���b�V�U�L��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G0BACKP	2122	/* �f�O�{�̈�␳��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G0BACKC	2123	/* �f�O�����̈�␳��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G0BACKM	2124	/* �f�O�|�̈�␳��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G1BACKP	2125	/* �f1�{�̈�␳��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G1BACKC	2126	/* �f1�����̈�␳��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G1BACKM	2127	/* �f1�|�̈�␳��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKFE1	2128	/* �f1�␳�ʐ֑ؑ��x�P	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKFE2	2129	/* �f1�␳�ʐ֑ؑ��x�Q	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKDIS1	2130	/* �f1�␳�ʐؑ֋����P	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKDIS2	2131	/* �f1�␳�ʐؑ֋����Q	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPOS1	2132	/* �f1�␳�ʐؑ֏I�_�ʒu�P	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPOS2	2133	/* �f1�␳�ʐؑ֏I�_�ʒu�Q	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKARCK	2134	/* �~�ʕ␳�W��	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKFRE	2135	/* ���t�@�����X�_���x	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPRE	2136	/* ���t�@�����X�_�I�_�ʒu	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKDRE	2137	/* ���t�@�����X�_�i������	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPOSC	2138	/* �A�����ʒu�����_	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_OMRFF_OFF	2139	/* omrff_off �iOMR-FF�����j	*//* P1X-A127 */
#define	M_SSEC_AXISPRM_SSCSVOFFLTR	2140	/* ���x�Ď��T�[�{�I�t���ُ팟�o����	*//* P1X-A157E */
#define	M_SSEC_AXISPRM_LCHT	2141	/* �`���b�s���O���萔(�\�t�g1�i��)	*//* P1X-A217 */
#define	M_SSEC_AXISPRM_CH1T	2142	/* �`���b�s���O���萔(�\�t�g2�i��)	*//* P1X-A217 */
#define	M_SSEC_AXISPRM_POLAR	2143	/* ���䎲���΋ɐ�	*//* P1X-A377 */
#define	M_SSEC_AXISPRM_BASEPS	2144	/* ��{�@�B���W���_���΋���	*//* P1X-A377 */
#define	M_SSEC_AXISPRM_POS_BLF_L1	2146	/* �ʒu�ˑ��Q���^�o�b�N���b�V�����1(Blf_L1)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_POS_BLF_L2	2147	/* �ʒu�ˑ��Q���^�o�b�N���b�V�����2(Blf_L2)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_POS_BLF_E1	2148	/* �ʒu�ˑ��Q���^�o�b�N���b�V��␳��1(Blf_E1)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_POS_BLF_E2	2149	/* �ʒu�ˑ��Q���^�o�b�N���b�V��␳��2(Blf_E2)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_ROT_LEN	2150	/* 3D�@�B���`�F�b�N ��]���ŉ�����	*//* P1X-A269 */
#define	M_SSEC_AXISPRM_RATEDSPD	2151	/* ��i���x	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_ACCRATE	2152	/* �ő�����x�ɑ΂��������	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_G0TRATED	2153	/* ��i���x�܂ł�G0���萔(���i������)	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_HOBFFG	2155	/* �z�u���H���t�B�[�h�t�H���[�h�Q�C��	*//* P1X-A304 */
#define	M_SSEC_AXISPRM_MM_RTNDIR	2169	/* �蓮�v���߂����	*//* P1X-A349 */
#define	M_SSEC_AXISPRM_LMC1QR	2170	/* ���������߂��p���X�g���[�V�����␳�Q�C��1	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMC2QR	2171	/* ���������߂��p���X�g���[�V�����␳�Q�C��2	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMCDQR	2172	/* ���������߂��p���X�g���[�V�����␳�^�C�~���O	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMCKQR	2173	/* ���������߂��p���X�g���[�V�����␳3 �΂˒萔	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMCCQR	2174	/* ���������߂��p���X�g���[�V�����␳3 �S���W��	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_SPRADX_RADIUS	2175	/* ���꒼�a��(X)���a	*//* P1X-A346 */
#define	M_SSEC_AXISPRM_SPRADX_CLAMP	2176	/* ���꒼�a�����䎞�N�����v���x	*//* P1X-A346 */
#define	M_SSEC_AXISPRM_MANUALBTL	2177	/* �蓮���葬�xB���������萔	*//* P1X-A028A */
#define	M_SSEC_AXISPRM_SDIN	2180	/* ���x�Ď����̓h�A�ԍ�	*//* P1X-A157U */
#define	M_SSEC_AXISPRM_STLTRQ	2189	/* �d�͎Z�o�p�X�g�[���g���N	*//* P1X-A481 */
#define	M_SSEC_AXISPRM_VBL2_VG1	2561	/* �σo�b�N���b�V�␳�U �␳�f�[�^�؂�ւ����x�P	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_VG0	2562	/* �σo�b�N���b�V�␳�U �␳�f�[�^�؂�ւ����x�Q	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_P1	2563	/* �σo�b�N���b�V�␳�U �X�g���[�N�_�P	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_P2	2564	/* �σo�b�N���b�V�␳�U �X�g���[�N�_�Q	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_P3	2565	/* �σo�b�N���b�V�␳�U �X�g���[�N�_�R	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL11	2566	/* �σo�b�N���b�V�␳�U �؂�ւ����x�P�A�X�g���[�N�_�P�ł̕␳�f�[�^	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL12	2567	/* �σo�b�N���b�V�␳�U �؂�ւ����x�P�A�X�g���[�N�_�Q�ł̕␳�f�[�^	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL13	2568	/* �σo�b�N���b�V�␳�U �؂�ւ����x�P�A�X�g���[�N�_�R�ł̕␳�f�[�^	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL01	2569	/* �σo�b�N���b�V�␳�U �؂�ւ����x�Q�A�X�g���[�N�_�P�ł̕␳�f�[�^	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL02	2570	/* �σo�b�N���b�V�␳�U �؂�ւ����x�Q�A�X�g���[�N�_�Q�ł̕␳�f�[�^	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL03	2571	/* �σo�b�N���b�V�␳�U �؂�ւ����x�Q�A�X�g���[�N�_�R�ł̕␳�f�[�^	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_FLOAT_TC	2572	/* �σo�b�N���b�V�␳�U �����オ��ʎZ�o���̎��萔	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_LM_MUL	2573	/* �σo�b�N���b�V�␳�U ���X�g���[�V�����ʎZ�o���̏搔	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_VBOUND	2574	/* �σo�b�N���b�V�␳�U ���x���E�l	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_COMP_MAG	2575	/* �σo�b�N���b�V�␳�U �␳�{��	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_COMP_MUL	2576	/* �σo�b�N���b�V�␳�U �␳�ʎZ�o���̏搔	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BLE	2577	/* �σo�b�N���b�V�␳�U �Q����	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BLL	2578	/* �σo�b�N���b�V�␳�U �Q���ړ���	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_BLAT_FEED	2579	/* �o�b�N���b�V���������p���葬�x	*//* P1X-A475 */
#define	M_SSEC_AXISPRM_AXISREMOVE	8201	/* �����O��	*/
#define	M_SSEC_AXISPRM_INVALIDLIMIT	8202	/* �\�t�g���~�b�g����	*/
#define	M_SSEC_AXISPRM_LMITCAN	8203	/* �\�t�g���~�b�g�ꎞ����	*/
#define	M_SSEC_AXISPRM_SW_STLIM_MIN	8204	/* �\�t�g���~�b�g-	*/
#define	M_SSEC_AXISPRM_SW_STLIM_MAX	8205	/* �\�t�g���~�b�g+	*/
#define	M_SSEC_AXISPRM_TCHPOS	8206	/* �H�����	*/
#define	M_SSEC_AXISPRM_NOG76G87	8207	/* G76/G87�V�t�g��	*/
#define	M_SSEC_AXISPRM_G76G87	8208	/* G76/87�V�t�g(-)	*/
#define	M_SSEC_AXISPRM_G60	8209	/* G60�V�t�g��	*/
#define	M_SSEC_AXISPRM_INNERLIMIT	8210	/* �\�t�g���~�b�g����	*/
#define	M_SSEC_AXISPRM_MIRRORIMG	8211	/* �~���[�C���[�W	*/
#define	M_SSEC_AXISPRM_ROT_TYPE	8213	/* ��]���^�C�v	*//* P1X-A140 */
#define	M_SSEC_AXISPRM_TLM_LENGTH	8215	/* TLM�����	*//* P1X-A020AC */
#define	M_SSEC_AXISPRM_G28TYPE	8216	/* G28���A����^�C�v	*//* P1X-A248 */
#define	M_SSEC_AXISPRM_CHECK_ST	8217	/* �O���t�B�b�N�`�F�b�N�n�_	*//* P1X-A202R */
#define	M_SSEC_AXISPRM_DIRECT_ESC	8218	/* �_�C���N�g�w�ߑޔ��	*//* P1X-A432 */
#define	M_SSEC_AXISPRM_NAME_CHAR	10000	/* ������Char	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_TLML	10001	/* �H���������(tlml)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_TLMH	10002	/* �H������ʍ���(tlmh)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_BIT_AXBITP	10003	/* ���[�U�p���̊e��r�b�g�p�����[�^(axbitp)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_BIT_AXCONT	10004	/* �@�B�p���̊e��r�b�g�p�����[�^(axcont)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_G0TRAPID	10005	/* �����葬�x�܂ł�G0���萔(���i������)	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_RAPID_DOUBLE	10101	/* �����葬�x (Double�p�j-#2001	*//* P1X-A100H */
#define	M_SSEC_AXISPRM_CRUMP_DOUBLE	10102	/* �؍푗��N�����v���x (Double�p�j-#2002	*//* P1X-A100H */
#define	M_SSEC_AXISPRM_SMGST1	12818	/* ����p�����[�^�Q1�@�������^�C�v	*//* P1X-A299 */
#define	M_SSEC_AXISPRM_SMGST2	12828	/* ����p�����[�^�Q2�@�������^�C�v	*//* P1X-A299 */
#define	M_SSEC_AXISPRM_SMGST3	12838	/* ����p�����[�^�Q3�@�������^�C�v	*//* P1X-A299 */
#define	M_SSEC_AXISPRM_SMGST4	12848	/* ����p�����[�^�Q4�@�������^�C�v	*//* P1X-A299 */

/* ��]���\���p�����[�^	*/
#define	M_SSEC_MPROTAX_RECTANGULAR_AX_I	7900	/* �������W��������	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_RECTANGULAR_AX_J	7901	/* �������W�c������	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_RECTANGULAR_AX_K	7902	/* �������W����������	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_G92_COORD	7903	/* �I���W���[�����W�n�I��	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_NO_TIP_POSITION	7904	/* �H��n���h������@�\�I��	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_NO_ABS	7905	/* �蓮ABS�X�C�b�`�I���^�I�t���̍H��ړ��ʕ\���I��	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_SINGU_PASS_TYPE	7906	/* ���ٓ_�ʉ߃^�C�v	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_SINGU_CHK_HOLD	7907	/* ���ٓ_�ߖT����臒l	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_SLCT_PRG_COORD	7908	/* �v���O���~���O���W�n�I��	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_IJK_VEC_MR	7909	/* �p���x�N�g���~���[�C���[�W�I��	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_SLCT_INT_MODE	7910	/* ��[�_�����ԕ����I��	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_SLCT_STD_POS	7911	/* ��]����ʒu�I��	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_NO_MANUAL	7912	/* 5�����H�p�蓮����@�\�I��	*//* P1X-A452 */
#define	M_SSEC_MPROTAX_MCHN_SPD_CTRL	7913	/* �@�B�ړ����x�ϓ��}��	*//* P1X-A085T */
#define	M_SSEC_MPROTAX_ROT_PREFILT	7914	/* ��]���v���t�B���^���萔	*//* P1X-A351 */
#define	M_SSEC_MPROTAX_SLCT_SLOPE_CRD_MOD	7915	/* �X�Ζʉ��H��]����ʒu�I��	*//* P1X-A332E */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_T1	7920	/* �H���������]���I��	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_T1	7921	/* �H��������X�Ίp�x	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_T1	7922	/* �H���������]������	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_T1	7923	/* �H���������]����	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T1H	7924	/* �H�������������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T1V	7925	/* �H��������c����]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T1T	7926	/* �H���������������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T1H	7927	/* �H�������������]���S�덷�␳��	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T1V	7928	/* �H��������c����]���S�덷�␳��	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_T2	7930	/* �H��H���]���I��	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_T2	7931	/* �H��H��X�Ίp�x	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_T2	7932	/* �H��H���]������	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_T2	7933	/* �H��H���]����	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T2H	7934	/* �H��H�������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T2V	7935	/* �H��H��c����]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T2T	7936	/* �H��H���������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T2H	7937	/* �H��H�������]���S�덷�␳��	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T2V	7938	/* �H��H��c����]���S�덷�␳��	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_W1	7940	/* �e�[�u������������]���I��	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_W1	7941	/* �e�[�u�����������X�Ίp�x	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_W1	7942	/* �e�[�u������������]������	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_W1	7943	/* �e�[�u������������]����	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W1H	7944	/* �e�[�u����������������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W1V	7945	/* �e�[�u�����������c����]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W1T	7946	/* �e�[�u������������������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W1H	7947	/* �e�[�u����������������]���S�덷�␳��	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W1V	7948	/* �e�[�u�����������c����]���S�덷�␳��	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_W2	7950	/* �e�[�u�������[�N����]���I��	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_W2	7951	/* �e�[�u�������[�N���X�Ίp�x	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_W2	7952	/* �e�[�u�������[�N����]������	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_W2	7953	/* �e�[�u�������[�N����]����	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W2H	7954	/* �e�[�u�������[�N��������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W2V	7955	/* �e�[�u�������[�N���c����]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W2T	7956	/* �e�[�u�������[�N����������]���S�I�t�Z�b�g	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W2H	7957	/* �e�[�u�������[�N��������]���S�덷�␳��	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W2V	7958	/* �e�[�u�������[�N���c����]���S�덷�␳��	*//* P1X-A221 */

/* PLC�����o���p�����[�^/PLC��PLC�����o���p�����[�^	*/
#define	M_SSEC_PLCINDXPRM_CHGAUXNO	12800	/* �⏕���ԍ�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STATION	12801	/* ���o�X�e�[�V������	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_CONT1	12802	/* ����p�����[�^1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_CONT2	12803	/* ����p�����[�^2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TLENG	12804	/* �������X�g���[�N��	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STOFSET	12805	/* �X�e�[�V�����I�t�Z�b�g	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED1	12810	/* ����p�����[�^�Q�P�@�����^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED1	12811	/* ����p�����[�^�Q�P�@�蓮�^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL1	12812	/* ����p�����[�^�Q�P�@���������萔�P	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL2	12813	/* ����p�����[�^�Q�P�@���������萔2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL1	12814	/* ����p�����[�^�Q�P�@�g���N�����l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD1	12815	/* ����p�����[�^�Q�P�@�덷�ߑ匟�o��	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST1	12816	/* ����p�����[�^�Q�P�@��ʒu�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR1	12817	/* ����p�����[�^�Q�P�@��ʒu�ߖT�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST1	12818	/* ����p�����[�^�Q�P�@�������^�C�v	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED2	12820	/* ����p�����[�^�Q�Q�@�����^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED2	12821	/* ����p�����[�^�Q�Q�@�蓮�^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL2_1	12822	/* ����p�����[�^�Q�Q�@���������萔�P	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL2_2	12823	/* ����p�����[�^�Q�Q�@���������萔2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL2	12824	/* ����p�����[�^�Q�Q�@�g���N�����l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD2	12825	/* ����p�����[�^�Q�Q�@�덷�ߑ匟�o��	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST2	12826	/* ����p�����[�^�Q�Q�@��ʒu�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR2	12827	/* ����p�����[�^�Q�Q�@��ʒu�ߖT�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST2	12828	/* ����p�����[�^�Q�Q�@�������^�C�v	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED3	12830	/* ����p�����[�^�Q�R�@�����^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED3	12831	/* ����p�����[�^�Q�R�@�蓮�^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL3_1	12832	/* ����p�����[�^�Q�R�@���������萔�P	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL3_2	12833	/* ����p�����[�^�Q�R�@���������萔2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL3	12834	/* ����p�����[�^�Q�R�@�g���N�����l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD3	12835	/* ����p�����[�^�Q�R�@�덷�ߑ匟�o��	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST3	12836	/* ����p�����[�^�Q�R�@��ʒu�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR3	12837	/* ����p�����[�^�Q�R�@��ʒu�ߖT�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST3	12838	/* ����p�����[�^�Q�R�@�������^�C�v	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED4	12840	/* ����p�����[�^�Q�S�@�����^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED4	12841	/* ����p�����[�^�Q�S�@�蓮�^�]���x	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL4_1	12842	/* ����p�����[�^�Q�S�@���������萔�P	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL4_2	12843	/* ����p�����[�^�Q�S�@���������萔2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL4	12844	/* ����p�����[�^�Q�S�@�g���N�����l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD4	12845	/* ����p�����[�^�Q�S�@�덷�ߑ匟�o��	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST4	12846	/* ����p�����[�^�Q�S�@��ʒu�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR4	12847	/* ����p�����[�^�Q�S�@��ʒu�ߖT�o�͕�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST4	12848	/* ����p�����[�^�Q�S�@�������^�C�v	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS2	12850	/* �X�e�[�V�����Q���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS3	12851	/* �X�e�[�V�����R���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS4	12852	/* �X�e�[�V�����S���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS5	12853	/* �X�e�[�V�����T���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS6	12854	/* �X�e�[�V�����U���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS7	12855	/* �X�e�[�V�����V���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS8	12856	/* �X�e�[�V�����W���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS9	12857	/* �X�e�[�V�����X���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS10	12858	/* �X�e�[�V�����P�O���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS11	12859	/* �X�e�[�V�����P�P���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS12	12860	/* �X�e�[�V�����P�Q���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS13	12861	/* �X�e�[�V�����P�R���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS14	12862	/* �X�e�[�V�����P�S���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS15	12863	/* �X�e�[�V�����P�T���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS16	12864	/* �X�e�[�V�����P�U���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS17	12865	/* �X�e�[�V�����P�V���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS18	12866	/* �X�e�[�V�����P�W���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS19	12867	/* �X�e�[�V�����P�X���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS20	12868	/* �X�e�[�V�����Q�O���W�l	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSWCHECK	12870	/* �o�r�v�@���o����	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW1DOG1	12871	/* �o�r�v1�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW1DOG2	12872	/* �o�r�v1�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW2DOG1	12873	/* �o�r�v2�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW2DOG2	12874	/* �o�r�v2�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW3DOG1	12875	/* �o�r�v3�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW3DOG2	12876	/* �o�r�v3�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW4DOG1	12877	/* �o�r�v4�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW4DOG2	12878	/* �o�r�v4�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW5DOG1	12879	/* �o�r�v5�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW5DOG2	12880	/* �o�r�v5�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW6DOG1	12881	/* �o�r�v6�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW6DOG2	12882	/* �o�r�v6�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW7DOG1	12883	/* �o�r�v7�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW7DOG2	12884	/* �o�r�v7�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW8DOG1	12885	/* �o�r�v8�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW8DOG2	12886	/* �o�r�v8�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW9DOG1	12887	/* �o�r�v9�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW9DOG2	12888	/* �o�r�v9�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW10DOG1	12889	/* �o�r�v10�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW10DOG2	12890	/* �o�r�v10�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW11DOG1	12891	/* �o�r�v11�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW11DOG2	12892	/* �o�r�v11�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW12DOG1	12893	/* �o�r�v12�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW12DOG2	12894	/* �o�r�v12�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW13DOG1	12895	/* �o�r�v13�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW13DOG2	12896	/* �o�r�v13�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW14DOG1	12897	/* �o�r�v14�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW14DOG2	12898	/* �o�r�v14�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW15DOG1	12899	/* �o�r�v15�@�̈�ݒ�1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW15DOG2	12900	/* �o�r�v15�@�̈�ݒ�2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT	12910	/* �������ė�	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT1	12911	/* �������đҋ@����	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT2	12912	/* �������ăg���N�J������	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT3	12913	/* ��ʒu�M���o�͒x������	*//* P1X-A299 */

/* HMI�p�����[�^	*/
#define	M_SSEC_HMI_PRM_GCK_DISPMODE	1	/* �\�����[�h(�`�F�b�N�p)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_SCALE	2	/* �X�P�[��  (�`�F�b�N�p�j	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_TRMTX1(x)	(10+(x))	/* �ϊ��}�g���N�X1(�`�F�b�N�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_TRMTX2(x)	(20+(x))	/* �ϊ��}�g���N�X2(�`�F�b�N�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_TRMTX3(x)	(30+(x))	/* �ϊ��}�g���N�X3(�`�F�b�N�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_UP_TROFS(x)	(40+(x))	/* �ϊ��I�t�Z�b�g��(�`�F�b�N�p) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_DN_TROFS(x)	(50+(x))	/* �ϊ��I�t�Z�b�g��(�`�F�b�N�p) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_DRAXID(x)	(60+(x))	/* �`�掲�ԍ�(�`�F�b�N�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_DISPMODE	101	/* �\�����[�h(�g���[�X�p)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_SCALE	102	/* �X�P�[��  (�g���[�X�p�j	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_CNTR_TYPE	103	/* �g���[�XON�J�E���^���	*//* P1X-A020AJ */
#define	M_SSEC_HMI_PRM_GTR_TIPCNTR_TYPE	104	/* ��[�g���[�XON�J�E���^���	*//* P1X-A020AJ */
#define	M_SSEC_HMI_PRM_GTR_TRMTX1(x)	(110+(x))	/* �ϊ��}�g���N�X1(�g���[�X�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_TRMTX2(x)	(120+(x))	/* �ϊ��}�g���N�X2(�g���[�X�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_TRMTX3(x)	(130+(x))	/* �ϊ��}�g���N�X3(�g���[�X�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_UP_TROFS(x)	(140+(x))	/* �ϊ��I�t�Z�b�g��(�g���[�X�p) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_DN_TROFS(x)	(150+(x))	/* �ϊ��I�t�Z�b�g��(�g���[�X�p) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_DRAXID(x)	(160+(x))	/* �`�掲�ԍ�(�g���[�X�p) (x=0�`2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GRF_PRG	200	/* �g���[�X�E�`�F�b�N2D�v���O�����\���ؑ�	*//* P1X-A020S */
#define	M_SSEC_HMI_PRM_GRF_FULL_DISP	201	/* �g���[�X�E�`�F�b�N2D/3D�S��ʕ\���ؑ�	*//* P1X-A020S */
#define	M_SSEC_HMI_PRM_2D_AUTOGRF	996	/* 2D�`�F�b�N �����O���t�B�b�N	*//* P1X-A020BJ */
#define	M_SSEC_HMI_PRM_2D_DRAW_WOFS	997	/* 2D�`�F�b�N�`��̃��[�N���W�n�I��	*//* P1X-A020BF */
#define	M_SSEC_HMI_PRM_WORK_DRAW_WOFS	998	/* �f�ޕ`��(3D)�̃��[�N���W�n�I��	*//* P1X-A020AH */
#define	M_SSEC_HMI_PRM_WORK_DRAW_POS	999	/* �f�ނ̕`����W�n	*//* P1X-A020AG */
#define	M_SSEC_HMI_PRM_WORK_FORM	1000	/* ���[�N�`�� �f�ތ`��	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_REFPOINT_I	1001	/* �f�ނ̌��_(I���W)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_REFPOINT_J	1002	/* �f�ނ̌��_(J���W)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_REFPOINT_K	1003	/* �f�ނ̌��_(K���W)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_WIDTH_I	1004	/* �f�ނ̕�(�h������)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_WIDTH_J	1005	/* �f�ނ̕�(J������)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_WIDTH_K	1006	/* �f�ނ̕�(K������)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_COLOR	1007	/* �f�ސF	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_MACHINED_COLOR	1008	/* �f�މ��H�ʐF	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TAPPED_COLOR	1009	/* �f�ރ^�b�v���H�ʐF	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_INTERFERENCE_COLOR	1010	/* �f�ފ��ʐF	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_SECTION_COLOR	1011	/* �f�ޒf�ʐF	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_NO(x)	(1100+(x))	/* �H��ԍ� (x=1�`80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_KIND(x)	(1500+(x))	/* �H���� (x=1�`80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_RADIUS(x)	(1900+(x))	/* �H��a (x=1�`80)	*//* P1X-A020J�@P1X-A269 */
#define	M_SSEC_HMI_PRM_TOOL_LENGTH(x)	(2300+(x))	/* �H� (x=1�`80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_DATA1(x)	(2700+(x))	/* �H��`��f�[�^�P (x=1�`80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_DATA2(x)	(3100+(x))	/* �H��`��f�[�^�Q (x=1�`80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_COLOR(x)	(3500+(x))	/* �H��F (x=1�`80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_COUNTER_TYPE	4000	/* �J�E���^��ނ̋L���iM7�|�b�v�A�b�v�\���p�j	*//* P1X-A006c */
#define	M_SSEC_HMI_PRM_CMT_DISP	4001	/* �ꗗ�\�̃R�����g�\��	*//* P1X-A099f */
#define	M_SSEC_HMI_PRM_EDIT_DISPLAY_TYPE	4002	/* �ҏW�\�������Ƃ��̉�ʕ\���^�C�v�ؑ�	*//* P1X-A020R */
#define	M_SSEC_HMI_PRM_SORT_TYPE	4003	/* �ꗗ�\�̃\�[�g�^�C�v	*//* P1X-A020AF */
#define	M_SSEC_HMI_PRM_3D_EYE_POS_I	4010	/* 3D�\���b�h���_�̍��W(I���W)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_EYE_POS_J	4011	/* 3D�\���b�h���_�̍��W(J������)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_EYE_POS_K	4012	/* 3D�\���b�h���_�̍��W(K������)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_TARGET_POS_I	4013	/* 3D�\���b�h�ڕW�_�̍��W(I���W)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_TARGET_POS_J	4014	/* 3D�\���b�h�ڕW�_�̍��W(J���W)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_TARGET_POS_K	4015	/* 3D�\���b�h�ڕW�_�̍��W(K���W)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_VECTOR_I	4016	/* 3D�\���b�h������̃x�N�g��(I���W)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_VECTOR_J	4017	/* 3D�\���b�h������̃x�N�g��(J���W)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_VECTOR_K	4018	/* 3D�\���b�h������̃x�N�g��(K���W)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_CYCLETIME_1	5000	/* �T�C�N���^�C���\���ؑ�1	*//* P1X-A020Q */
#define	M_SSEC_HMI_PRM_CYCLETIME_2	5001	/* �T�C�N���^�C���\���ؑ�2	*//* P1X-A020Q */
#define	M_SSEC_HMI_PRM_TIPCNTR_TYPE1	5002	/* �J�E���^���1(��[�\���p)	*//* P1X-A326 */
#define	M_SSEC_HMI_PRM_TIPCNTR_TYPE2	5003	/* �J�E���^���2(��[�\���p)	*//* P1X-A326 */
#define	M_SSEC_HMI_PRM_TIPCNTR_TYPE3	5004	/* �J�E���^���3(��[�\���p)	*//* P1X-A326 */
#define	M_SSEC_HMI_PRM_MSTB_TYPE	5100	/* MSTB�\���^�C�v(2�n�������\��)	*//* P1X-A322 */
#define	M_SSEC_HMI_PRM_SCRN_SIZE	5200	/* ��ʃT�C�Y	*//* P1X-A388 */
#define	M_SSEC_HMI_PRM_ABSINC_MODE	6000	/* ���/���Z���̓��[�h�L��	*//* P1X-A393 */
#define	M_SSEC_HMI_PRM_DEVOPEN_CMT	6001	/* �f�o�C�X�J���R�����g�\��	*//* P1X-A412E */
#define	M_SSEC_HMI_PRM_MON_DISPWORK_NO	7000	/* �^�]��� �\�����[�NNo	*//* P1X-A451 */
#define	M_SSEC_HMI_PRM_SET_DISPWORK_NO	7001	/* �i���� �\�����[�NNo	*//* P1X-A451 */
#define	M_SSEC_HMI_PRM_3DTOOL_NO(x)	(10000+(x))	/* �H��Ǘ� �H��ԍ� (x=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_KIND(x)	(12000+(x))	/* �H��Ǘ� �H���� �ix=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_RADIUS(x)	(14000+(x))	/* �H��Ǘ� �H��a �ix=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_LENGTH(x)	(16000+(x))	/* �H��Ǘ� �H��ix=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_DATA1(x)	(18000+(x))	/* �H��Ǘ� �H��`��f�[�^�P�ix=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_DATA2(x)	(20000+(x))	/* �H��Ǘ� �H��`��f�[�^�Q�ix=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_COLOR(x)	(22000+(x))	/* �H��Ǘ� �H��F�ix=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_HOL_H(x)	(24000+(x))	/* �H��Ǘ� �z���_�����ix=1�`80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_HOL_R(x)	(26000+(x))	/* �H��Ǘ� �z���_���a�ix=1�`80)	*//* P1X-A269 */

/* ���H�����I���p�����[�^	*/

/* 4200100�`4261800�̏��敪�Ɋւ��Ă�x=0�̎�(x�͏����ɑΉ�)�A�W���p�����[�^�ɑΉ����Ă���B */
/* G�R�[�h�w�߂ł̓A�h���XP(���H�p�r)��0�̎��A�W���p�����[�^�ɑΉ����Ă���B	*/
#define	M_SSEC_CNDSLC_CHGCOND	1	/* ���H�����؊���	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP_NAME(x)	(10+(x))	/* ���H�p�r����(x=0�`2)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_INICONDPRM	100	/* ���H�����p�����[�^������	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_G1BTL(x)	(4200100+(x))	/* [���H�p�r1]���萔 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SFILT(x)	(4200200+(x))	/* [���H�p�r1]G01�\�t�g������S���t�B���^ (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SFILT2(x)	(4200300+(x))	/* [���H�p�r1]�\�t�g�������t�B���^2 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_RCOMP(x)	(4200400+(x))	/* [���H�p�r1]���x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_CORCOMP(x)	(4200500+(x))	/* [���H�p�r1]�R�[�i���x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_CURCOMP(x)	(4200600+(x))	/* [���H�p�r1]�Ȑ����x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_FFGAIN(x)	(4200700+(x))	/* [���H�p�r1]�t�B�[�h�t�H���[�h�Q�C�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_FCORN(x)	(4200800+(x))	/* [���H�p�r1]�R�[�i�����p�x (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SPCANAG(x)	(4200900+(x))	/* [���H�p�r1]�L�����Z���p�x (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_DISTTH1(x)	(4201000+(x))	/* [���H�p�r1]���덷1 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_DISTTH2(x)	(4201100+(x))	/* [���H�p�r1]���덷2 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_MINUTE(x)	(4201200+(x))	/* [���H�p�r1]���������� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_FAIRING_ON(x)	(4201300+(x))	/* [���H�p�r1]�t�F�A�����O�L�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_MINLENG(x)	(4201400+(x))	/* [���H�p�r1]������ (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_CORDEC_JUDGE_L(x)	(4201500+(x))	/* [���H�p�r1]�R�[�i���蒷 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SSS_ON(x)	(4201600+(x))	/* [���H�p�r1]SSS����L�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_STDLENGTH(x)	(4201700+(x))	/* [���H�p�r1]����� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_STEPLENGTH(x)	(4201800+(x))	/* [���H�p�r1]�i���� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_G1BTL(x)	(4230100+(x))	/* [���H�p�r2]���萔 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SFILT(x)	(4230200+(x))	/* [���H�p�r2]G01�\�t�g������S���t�B���^ (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SFILT2(x)	(4230300+(x))	/* [���H�p�r2]�\�t�g�������t�B���^2 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_RCOMP(x)	(4230400+(x))	/* [���H�p�r2]���x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_CORCOMP(x)	(4230500+(x))	/* [���H�p�r2]�R�[�i���x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_CURCOMP(x)	(4230600+(x))	/* [���H�p�r2]�Ȑ����x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_FFGAIN(x)	(4230700+(x))	/* [���H�p�r2]�t�B�[�h�t�H���[�h�Q�C�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_FCORN(x)	(4230800+(x))	/* [���H�p�r2]�R�[�i�����p�x (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SPCANAG(x)	(4230900+(x))	/* [���H�p�r2]�L�����Z���p�x (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_DISTTH1(x)	(4231000+(x))	/* [���H�p�r2]���덷1 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_DISTTH2(x)	(4231100+(x))	/* [���H�p�r2]���덷2 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_MINUTE(x)	(4231200+(x))	/* [���H�p�r2]���������� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_FAIRING_ON(x)	(4231300+(x))	/* [���H�p�r2]�t�F�A�����O�L�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_MINLENG(x)	(4231400+(x))	/* [���H�p�r2]������ (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_CORDEC_JUDGE_L(x)	(4231500+(x))	/* [���H�p�r2]�R�[�i���蒷 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SSS_ON(x)	(4231600+(x))	/* [���H�p�r2]SSS����L�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_STDLENGTH(x)	(4231700+(x))	/* [���H�p�r2]����� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_STEPLENGTH(x)	(4231800+(x))	/* [���H�p�r2]�i���� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_G1BTL(x)	(4260100+(x))	/* [���H�p�r3]���萔 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SFILT(x)	(4260200+(x))	/* [���H�p�r3]G01�\�t�g������S���t�B���^ (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SFILT2(x)	(4260300+(x))	/* [���H�p�r3]�\�t�g�������t�B���^2 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_RCOMP(x)	(4260400+(x))	/* [���H�p�r3]���x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_CORCOMP(x)	(4260500+(x))	/* [���H�p�r3]�R�[�i���x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_CURCOMP(x)	(4260600+(x))	/* [���H�p�r3]�Ȑ����x�W�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_FFGAIN(x)	(4260700+(x))	/* [���H�p�r3]�t�B�[�h�t�H���[�h�Q�C�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_FCORN(x)	(4260800+(x))	/* [���H�p�r3]�R�[�i�����p�x (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SPCANAG(x)	(4260900+(x))	/* [���H�p�r3]�L�����Z���p�x (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_DISTTH1(x)	(4261000+(x))	/* [���H�p�r3]���덷1 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_DISTTH2(x)	(4261100+(x))	/* [���H�p�r3]���덷2 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_MINUTE(x)	(4261200+(x))	/* [���H�p�r3]���������� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_FAIRING_ON(x)	(4261300+(x))	/* [���H�p�r3]�t�F�A�����O�L�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_MINLENG(x)	(4261400+(x))	/* [���H�p�r3]������ (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_CORDEC_JUDGE_L(x)	(4261500+(x))	/* [���H�p�r3]�R�[�i���蒷 (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SSS_ON(x)	(4261600+(x))	/* [���H�p�r3]SSS����L�� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_STDLENGTH(x)	(4261700+(x))	/* [���H�p�r3]����� (x=0�`3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_STEPLENGTH(x)	(4261800+(x))	/* [���H�p�r3]�i���� (x=0�`3)	*//* P1X-A517 */

/* CC-Link�p���i��{�j	*/
#define	M_SSEC_CCLK_BASE_EXCHG_NO1	24001	/* 1�X���b�g�ڋǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_TRANS_SP1	24002	/* 1�X���b�g�ړ`�����x�����[�h	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_ABNML_LINK1	24003	/* 1�X���b�g�ڃf�[�^�����N�ُ�ǐݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PLC_STOP1	24004	/* 1�X���b�g��PLC STOP���ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_OCCUP_BUREAUX1	24005	/* 1�X���b�g�ڐ�L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CYCLIC1	24006	/* 1�X���b�g�ڊg���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CONNECT_NUM1	24007	/* 1�X���b�g�ڐڑ��䐔	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RETRY1	24008	/* 1�X���b�g�ڃ��g���C��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_AUTO_OPE_MATA1	24009	/* 1�X���b�g�ڎ�������䐔	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_STANDBY_MASTER1	24010	/* 1�X���b�g�ڑҋ@�}�X�^�w��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_NC_DOWN1	24011	/* 1�X���b�g��NC�_�E�����^�]�w��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SCAN_MODE1	24012	/* 1�X���b�g�ڃX�L�������[�h	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_DELAY_TIME1	24013	/* 1�X���b�g�ڃf�B���C����	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_DEV1	24014	/* 1�X���b�g�ڃ����[�g����(RX)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_NO1	24015	/* 1�X���b�g�ڃ����[�g����(RX)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_DEV1	24016	/* 1�X���b�g�ڃ����[�g�o��(RY)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_NO1	24017	/* 1�X���b�g�ڃ����[�g�o��(RY)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_DEV1	24018	/* 1�X���b�g�ڃ����[�g���W�X�^(RWr)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_NO1	24019	/* 1�X���b�g�ڃ����[�g���W�X�^(RWr)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_DEV1	24020	/* 1�X���b�g�ڃ����[�g���W�X�^(RWw)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_NO1	24021	/* 1�X���b�g�ڃ����[�g���W�X�^(RWw)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_DEV1	24022	/* 1�X���b�g�ړ��ꃊ���[(SB)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_NO1	24023	/* 1�X���b�g�ړ��ꃊ���[(SB)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_DEV1	24024	/* 1�X���b�g�ړ��ꃊ���[(SW)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_NO1	24025	/* 1�X���b�g�ړ��ꃊ���[(SW)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PRTCL_VER1	24026	/* 1�X���b�g�ڃv���g�R���o�[�W����	*//* P1X-A247B */
#define	M_SSEC_CCLK_BASE_EXCHG_NO2	24041	/* 2�X���b�g�ڋǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_TRANS_SP2	24042	/* 2�X���b�g�ړ`�����x�����[�h	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_ABNML_LINK2	24043	/* 2�X���b�g�ڃf�[�^�����N�ُ�ǐݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PLC_STOP2	24044	/* 2�X���b�g��PLC STOP���ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_OCCUP_BUREAUX2	24045	/* 2�X���b�g�ڐ�L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CYCLIC2	24046	/* 2�X���b�g�ڊg���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CONNECT_NUM2	24047	/* 2�X���b�g�ڐڑ��䐔	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RETRY2	24048	/* 2�X���b�g�ڃ��g���C��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_AUTO_OPE_MATA2	24049	/* 2�X���b�g�ڎ�������䐔	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_STANDBY_MASTER2	24050	/* 2�X���b�g�ڑҋ@�}�X�^�w��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_NC_DOWN2	24051	/* 2�X���b�g��NC�_�E�����^�]�w��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SCAN_MODE2	24052	/* 2�X���b�g�ڃX�L�������[�h	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_DELAY_TIME2	24053	/* 2�X���b�g�ڃf�B���C����	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_DEV2	24054	/* 2�X���b�g�ڃ����[�g����(RX)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_NO2	24055	/* 2�X���b�g�ڃ����[�g����(RX)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_DEV2	24056	/* 2�X���b�g�ڃ����[�g�o��(RY)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_NO2	24057	/* 2�X���b�g�ڃ����[�g�o��(RY)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_DEV2	24058	/* 2�X���b�g�ڃ����[�g���W�X�^(RWr)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_NO2	24059	/* 2�X���b�g�ڃ����[�g���W�X�^(RWr)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_DEV2	24060	/* 2�X���b�g�ڃ����[�g���W�X�^(RWw)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_NO2	24061	/* 2�X���b�g�ڃ����[�g���W�X�^(RWw)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_DEV2	24062	/* 2�X���b�g�ړ��ꃊ���[(SB)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_NO2	24063	/* 2�X���b�g�ړ��ꃊ���[(SB)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_DEV2	24064	/* 2�X���b�g�ړ��ꃊ���[(SW)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_NO2	24065	/* 2�X���b�g�ړ��ꃊ���[(SW)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PRTCL_VER2	24066	/* 2�X���b�g�ڃv���g�R���o�[�W����	*//* P1X-A247B */
#define	M_SSEC_CCLK_BASE_EXCHG_NO3	24081	/* 3�X���b�g�ڋǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_TRANS_SP3	24082	/* 3�X���b�g�ړ`�����x�����[�h	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_ABNML_LINK3	24083	/* 3�X���b�g�ڃf�[�^�����N�ُ�ǐݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PLC_STOP3	24084	/* 3�X���b�g��PLC STOP���ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_OCCUP_BUREAUX3	24085	/* 3�X���b�g�ڐ�L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CYCLIC3	24086	/* 3�X���b�g�ڊg���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CONNECT_NUM3	24087	/* 3�X���b�g�ڐڑ��䐔	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RETRY3	24088	/* 3�X���b�g�ڃ��g���C��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_AUTO_OPE_MATA3	24089	/* 3�X���b�g�ڎ�������䐔	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_STANDBY_MASTER3	24090	/* 3�X���b�g�ڑҋ@�}�X�^�w��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_NC_DOWN3	24091	/* 3�X���b�g��NC�_�E�����^�]�w��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SCAN_MODE3	24092	/* 3�X���b�g�ڃX�L�������[�h	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_DELAY_TIME3	24093	/* 3�X���b�g�ڃf�B���C����	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_DEV3	24094	/* 3�X���b�g�ڃ����[�g����(RX)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_NO3	24095	/* 3�X���b�g�ڃ����[�g����(RX)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_DEV3	24096	/* 3�X���b�g�ڃ����[�g�o��(RY)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_NO3	24097	/* 3�X���b�g�ڃ����[�g�o��(RY)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_DEV3	24098	/* 3�X���b�g�ڃ����[�g���W�X�^(RWr)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_NO3	24099	/* 3�X���b�g�ڃ����[�g���W�X�^(RWr)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_DEV3	24100	/* 3�X���b�g�ڃ����[�g���W�X�^(RWw)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_NO3	24101	/* 3�X���b�g�ڃ����[�g���W�X�^(RWw)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_DEV3	24102	/* 3�X���b�g�ړ��ꃊ���[(SB)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_NO3	24103	/* 3�X���b�g�ړ��ꃊ���[(SB)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_DEV3	24104	/* 3�X���b�g�ړ��ꃊ���[(SW)���t���b�V���f�o�C�X��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_NO3	24105	/* 3�X���b�g�ړ��ꃊ���[(SW)���t���b�V���f�o�C�X�ԍ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PRTCL_VER3	24106	/* 3�X���b�g�ڃv���g�R���o�[�W����	*//* P1X-A247B */

/* CC-Link�p���i�Ǐ��j	*/
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE1	24121	/* �ǔ�1�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC1	24122	/* �ǔ�1�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO1	24123	/* �ǔ�1��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO1	24124	/* �ǔ�1�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM1	24125	/* �ǔ�1�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM1	24126	/* �ǔ�1�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ1	24131	/* �ǔ�1���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ1	24132	/* �ǔ�1��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ1	24133	/* �ǔ�1�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE2	24136	/* �ǔ�2�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC2	24137	/* �ǔ�2�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO2	24138	/* �ǔ�2��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO2	24139	/* �ǔ�2�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM2	24140	/* �ǔ�2�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM2	24141	/* �ǔ�2�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ2	24146	/* �ǔ�2���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ2	24147	/* �ǔ�2��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ2	24148	/* �ǔ�2�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE3	24151	/* �ǔ�3�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC3	24152	/* �ǔ�3�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO3	24153	/* �ǔ�3��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO3	24154	/* �ǔ�3�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM3	24155	/* �ǔ�3�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM3	24156	/* �ǔ�3�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ3	24161	/* �ǔ�3���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ3	24162	/* �ǔ�3��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ3	24163	/* �ǔ�3�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE4	24166	/* �ǔ�4�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC4	24167	/* �ǔ�4�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO4	24168	/* �ǔ�4��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO4	24169	/* �ǔ�4�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM4	24170	/* �ǔ�4�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM4	24171	/* �ǔ�4�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ4	24176	/* �ǔ�4���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ4	24177	/* �ǔ�4��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ4	24178	/* �ǔ�4�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE5	24181	/* �ǔ�5�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC5	24182	/* �ǔ�5�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO5	24183	/* �ǔ�5��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO5	24184	/* �ǔ�5�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM5	24185	/* �ǔ�5�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM5	24186	/* �ǔ�5�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ5	24191	/* �ǔ�5���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ5	24192	/* �ǔ�5��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ5	24193	/* �ǔ�5�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE6	24196	/* �ǔ�6�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC6	24197	/* �ǔ�6�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO6	24198	/* �ǔ�6��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO6	24199	/* �ǔ�6�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM6	24200	/* �ǔ�6�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM6	24201	/* �ǔ�6�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ6	24206	/* �ǔ�6���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ6	24207	/* �ǔ�6��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ6	24208	/* �ǔ�6�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE7	24211	/* �ǔ�7�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC7	24212	/* �ǔ�7�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO7	24213	/* �ǔ�7��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO7	24214	/* �ǔ�7�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM7	24215	/* �ǔ�7�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM7	24216	/* �ǔ�7�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ7	24221	/* �ǔ�7���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ7	24222	/* �ǔ�7��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ7	24223	/* �ǔ�7�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE8	24226	/* �ǔ�8�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC8	24227	/* �ǔ�8�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO8	24228	/* �ǔ�8��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO8	24229	/* �ǔ�8�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM8	24230	/* �ǔ�8�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM8	24231	/* �ǔ�8�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ8	24236	/* �ǔ�8���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ8	24237	/* �ǔ�8��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ8	24238	/* �ǔ�8�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE9	24241	/* �ǔ�9�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC9	24242	/* �ǔ�9�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO9	24243	/* �ǔ�9��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO9	24244	/* �ǔ�9�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM9	24245	/* �ǔ�9�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM9	24246	/* �ǔ�9�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ9	24251	/* �ǔ�9���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ9	24252	/* �ǔ�9��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ9	24253	/* �ǔ�9�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE10	24256	/* �ǔ�10�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC10	24257	/* �ǔ�10�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO10	24258	/* �ǔ�10��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO10	24259	/* �ǔ�10�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM10	24260	/* �ǔ�10�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM10	24261	/* �ǔ�10�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ10	24266	/* �ǔ�10���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ10	24267	/* �ǔ�10��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ10	24268	/* �ǔ�10�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE11	24271	/* �ǔ�11�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC11	24272	/* �ǔ�11�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO11	24273	/* �ǔ�11��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO11	24274	/* �ǔ�11�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM11	24275	/* �ǔ�11�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM11	24276	/* �ǔ�11�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ11	24281	/* �ǔ�11���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ11	24282	/* �ǔ�11��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ11	24283	/* �ǔ�11�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE12	24286	/* �ǔ�12�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC12	24287	/* �ǔ�12�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO12	24288	/* �ǔ�12��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO12	24289	/* �ǔ�12�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM12	24290	/* �ǔ�12�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM12	24291	/* �ǔ�12�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ12	24296	/* �ǔ�12���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ12	24297	/* �ǔ�12��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ12	24298	/* �ǔ�12�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE13	24301	/* �ǔ�13�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC13	24302	/* �ǔ�13�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO13	24303	/* �ǔ�13��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO13	24304	/* �ǔ�13�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM13	24305	/* �ǔ�13�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM13	24306	/* �ǔ�13�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ13	24311	/* �ǔ�13���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ13	24312	/* �ǔ�13��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ13	24313	/* �ǔ�13�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE14	24316	/* �ǔ�14�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC14	24317	/* �ǔ�14�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO14	24318	/* �ǔ�14��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO14	24319	/* �ǔ�14�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM14	24320	/* �ǔ�14�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM14	24321	/* �ǔ�14�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ14	24326	/* �ǔ�14���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ14	24327	/* �ǔ�14��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ14	24328	/* �ǔ�14�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE15	24331	/* �ǔ�15�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC15	24332	/* �ǔ�15�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO15	24333	/* �ǔ�15��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO15	24334	/* �ǔ�15�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM15	24335	/* �ǔ�15�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM15	24336	/* �ǔ�15�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ15	24341	/* �ǔ�15���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ15	24342	/* �ǔ�15��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ15	24343	/* �ǔ�15�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE16	24346	/* �ǔ�16�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC16	24347	/* �ǔ�16�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO16	24348	/* �ǔ�16��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO16	24349	/* �ǔ�16�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM16	24350	/* �ǔ�16�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM16	24351	/* �ǔ�16�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ16	24356	/* �ǔ�16���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ16	24357	/* �ǔ�16��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ16	24358	/* �ǔ�16�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE17	24361	/* �ǔ�17�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC17	24362	/* �ǔ�17�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO17	24363	/* �ǔ�17��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO17	24364	/* �ǔ�17�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM17	24365	/* �ǔ�17�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM17	24366	/* �ǔ�17�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ17	24371	/* �ǔ�17���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ17	24372	/* �ǔ�17��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ17	24373	/* �ǔ�17�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE18	24376	/* �ǔ�18�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC18	24377	/* �ǔ�18�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO18	24378	/* �ǔ�18��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO18	24379	/* �ǔ�18�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM18	24380	/* �ǔ�18�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM18	24381	/* �ǔ�18�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ18	24386	/* �ǔ�18���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ18	24387	/* �ǔ�18��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ18	24388	/* �ǔ�18�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE19	24391	/* �ǔ�19�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC19	24392	/* �ǔ�19�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO19	24393	/* �ǔ�19��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO19	24394	/* �ǔ�19�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM19	24395	/* �ǔ�19�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM19	24396	/* �ǔ�19�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ19	24401	/* �ǔ�19���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ19	24402	/* �ǔ�19��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ19	24403	/* �ǔ�19�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE20	24406	/* �ǔ�20�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC20	24407	/* �ǔ�20�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO20	24408	/* �ǔ�20��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO20	24409	/* �ǔ�20�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM20	24410	/* �ǔ�20�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM20	24411	/* �ǔ�20�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ20	24416	/* �ǔ�20���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ20	24417	/* �ǔ�20��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ20	24418	/* �ǔ�20�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE21	24421	/* �ǔ�21�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC21	24422	/* �ǔ�21�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO21	24423	/* �ǔ�21��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO21	24424	/* �ǔ�21�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM21	24425	/* �ǔ�21�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM21	24426	/* �ǔ�21�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ21	24431	/* �ǔ�21���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ21	24432	/* �ǔ�21��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ21	24433	/* �ǔ�21�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE22	24436	/* �ǔ�22�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC22	24437	/* �ǔ�22�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO22	24438	/* �ǔ�22��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO22	24439	/* �ǔ�22�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM22	24440	/* �ǔ�22�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM22	24441	/* �ǔ�22�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ22	24446	/* �ǔ�22���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ22	24447	/* �ǔ�22��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ22	24448	/* �ǔ�22�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE23	24451	/* �ǔ�23�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC23	24452	/* �ǔ�23�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO23	24453	/* �ǔ�23��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO23	24454	/* �ǔ�23�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM23	24455	/* �ǔ�23�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM23	24456	/* �ǔ�23�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ23	24461	/* �ǔ�23���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ23	24462	/* �ǔ�23��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ23	24463	/* �ǔ�23�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE24	24466	/* �ǔ�24�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC24	24467	/* �ǔ�24�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO24	24468	/* �ǔ�24��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO24	24469	/* �ǔ�24�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM24	24470	/* �ǔ�24�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM24	24471	/* �ǔ�24�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ24	24476	/* �ǔ�24���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ24	24477	/* �ǔ�24��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ24	24478	/* �ǔ�24�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE25	24481	/* �ǔ�25�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC25	24482	/* �ǔ�25�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO25	24483	/* �ǔ�25��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO25	24484	/* �ǔ�25�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM25	24485	/* �ǔ�25�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM25	24486	/* �ǔ�25�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ25	24491	/* �ǔ�25���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ25	24492	/* �ǔ�25��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ25	24493	/* �ǔ�25�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE26	24496	/* �ǔ�26�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC26	24497	/* �ǔ�26�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO26	24498	/* �ǔ�26��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO26	24499	/* �ǔ�26�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM26	24500	/* �ǔ�26�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM26	24501	/* �ǔ�26�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ26	24506	/* �ǔ�26���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ26	24507	/* �ǔ�26��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ26	24508	/* �ǔ�26�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE27	24511	/* �ǔ�27�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC27	24512	/* �ǔ�27�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO27	24513	/* �ǔ�27��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO27	24514	/* �ǔ�27�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM27	24515	/* �ǔ�27�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM27	24516	/* �ǔ�27�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ27	24521	/* �ǔ�27���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ27	24522	/* �ǔ�27��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ27	24523	/* �ǔ�27�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE28	24526	/* �ǔ�28�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC28	24527	/* �ǔ�28�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO28	24528	/* �ǔ�28��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO28	24529	/* �ǔ�28�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM28	24530	/* �ǔ�28�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM28	24531	/* �ǔ�28�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ28	24536	/* �ǔ�28���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ28	24537	/* �ǔ�28��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ28	24538	/* �ǔ�28�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE29	24541	/* �ǔ�29�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC29	24542	/* �ǔ�29�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO29	24543	/* �ǔ�29��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO29	24544	/* �ǔ�29�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM29	24545	/* �ǔ�29�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM29	24546	/* �ǔ�29�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ29	24551	/* �ǔ�29���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ29	24552	/* �ǔ�29��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ29	24553	/* �ǔ�29�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE30	24556	/* �ǔ�30�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC30	24557	/* �ǔ�30�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO30	24558	/* �ǔ�30��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO30	24559	/* �ǔ�30�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM30	24560	/* �ǔ�30�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM30	24561	/* �ǔ�30�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ30	24566	/* �ǔ�30���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ30	24567	/* �ǔ�30��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ30	24568	/* �ǔ�30�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE31	24571	/* �ǔ�31�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC31	24572	/* �ǔ�31�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO31	24573	/* �ǔ�31��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO31	24574	/* �ǔ�31�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM31	24575	/* �ǔ�31�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM31	24576	/* �ǔ�31�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ31	24581	/* �ǔ�31���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ31	24582	/* �ǔ�31��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ31	24583	/* �ǔ�31�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE32	24586	/* �ǔ�32�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC32	24587	/* �ǔ�32�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO32	24588	/* �ǔ�32��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO32	24589	/* �ǔ�32�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM32	24590	/* �ǔ�32�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM32	24591	/* �ǔ�32�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ32	24596	/* �ǔ�32���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ32	24597	/* �ǔ�32��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ32	24598	/* �ǔ�32�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE33	24601	/* �ǔ�33�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC33	24602	/* �ǔ�33�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO33	24603	/* �ǔ�33��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO33	24604	/* �ǔ�33�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM33	24605	/* �ǔ�33�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM33	24606	/* �ǔ�33�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ33	24611	/* �ǔ�33���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ33	24612	/* �ǔ�33��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ33	24613	/* �ǔ�33�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE34	24616	/* �ǔ�34�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC34	24617	/* �ǔ�34�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO34	24618	/* �ǔ�34��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO34	24619	/* �ǔ�34�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM34	24620	/* �ǔ�34�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM34	24621	/* �ǔ�34�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ34	24626	/* �ǔ�34���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ34	24627	/* �ǔ�34��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ34	24628	/* �ǔ�34�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE35	24631	/* �ǔ�35�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC35	24632	/* �ǔ�35�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO35	24633	/* �ǔ�35��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO35	24634	/* �ǔ�35�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM35	24635	/* �ǔ�35�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM35	24636	/* �ǔ�35�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ35	24641	/* �ǔ�35���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ35	24642	/* �ǔ�35��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ35	24643	/* �ǔ�35�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE36	24646	/* �ǔ�36�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC36	24647	/* �ǔ�36�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO36	24648	/* �ǔ�36��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO36	24649	/* �ǔ�36�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM36	24650	/* �ǔ�36�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM36	24651	/* �ǔ�36�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ36	24656	/* �ǔ�36���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ36	24657	/* �ǔ�36��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ36	24658	/* �ǔ�36�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE37	24661	/* �ǔ�37�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC37	24662	/* �ǔ�37�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO37	24663	/* �ǔ�37��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO37	24664	/* �ǔ�37�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM37	24665	/* �ǔ�37�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM37	24666	/* �ǔ�37�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ37	24671	/* �ǔ�37���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ37	24672	/* �ǔ�37��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ37	24673	/* �ǔ�37�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE38	24676	/* �ǔ�38�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC38	24677	/* �ǔ�38�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO38	24678	/* �ǔ�38��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO38	24679	/* �ǔ�38�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM38	24680	/* �ǔ�38�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM38	24681	/* �ǔ�38�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ38	24686	/* �ǔ�38���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ38	24687	/* �ǔ�38��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ38	24688	/* �ǔ�38�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE39	24691	/* �ǔ�39�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC39	24692	/* �ǔ�39�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO39	24693	/* �ǔ�39��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO39	24694	/* �ǔ�39�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM39	24695	/* �ǔ�39�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM39	24696	/* �ǔ�39�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ39	24701	/* �ǔ�39���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ39	24702	/* �ǔ�39��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ39	24703	/* �ǔ�39�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE40	24706	/* �ǔ�40�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC40	24707	/* �ǔ�40�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO40	24708	/* �ǔ�40��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO40	24709	/* �ǔ�40�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM40	24710	/* �ǔ�40�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM40	24711	/* �ǔ�40�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ40	24716	/* �ǔ�40���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ40	24717	/* �ǔ�40��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ40	24718	/* �ǔ�40�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE41	24721	/* �ǔ�41�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC41	24722	/* �ǔ�41�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO41	24723	/* �ǔ�41��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO41	24724	/* �ǔ�41�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM41	24725	/* �ǔ�41�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM41	24726	/* �ǔ�41�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ41	24731	/* �ǔ�41���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ41	24732	/* �ǔ�41��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ41	24733	/* �ǔ�41�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE42	24736	/* �ǔ�42�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC42	24737	/* �ǔ�42�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO42	24738	/* �ǔ�42��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO42	24739	/* �ǔ�42�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM42	24740	/* �ǔ�42�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM42	24741	/* �ǔ�42�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ42	24746	/* �ǔ�42���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ42	24747	/* �ǔ�42��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ42	24748	/* �ǔ�42�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE43	24751	/* �ǔ�43�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC43	24752	/* �ǔ�43�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO43	24753	/* �ǔ�43��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO43	24754	/* �ǔ�43�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM43	24755	/* �ǔ�43�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM43	24756	/* �ǔ�43�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ43	24761	/* �ǔ�43���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ43	24762	/* �ǔ�43��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ43	24763	/* �ǔ�43�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE44	24766	/* �ǔ�44�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC44	24767	/* �ǔ�44�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO44	24768	/* �ǔ�44��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO44	24769	/* �ǔ�44�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM44	24770	/* �ǔ�44�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM44	24771	/* �ǔ�44�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ44	24776	/* �ǔ�44���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ44	24777	/* �ǔ�44��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ44	24778	/* �ǔ�44�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE45	24781	/* �ǔ�45�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC45	24782	/* �ǔ�45�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO45	24783	/* �ǔ�45��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO45	24784	/* �ǔ�45�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM45	24785	/* �ǔ�45�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM45	24786	/* �ǔ�45�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ45	24791	/* �ǔ�45���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ45	24792	/* �ǔ�45��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ45	24793	/* �ǔ�45�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE46	24796	/* �ǔ�46�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC46	24797	/* �ǔ�46�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO46	24798	/* �ǔ�46��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO46	24799	/* �ǔ�46�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM46	24800	/* �ǔ�46�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM46	24801	/* �ǔ�46�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ46	24806	/* �ǔ�46���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ46	24807	/* �ǔ�46��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ46	24808	/* �ǔ�46�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE47	24811	/* �ǔ�47�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC47	24812	/* �ǔ�47�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO47	24813	/* �ǔ�47��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO47	24814	/* �ǔ�47�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM47	24815	/* �ǔ�47�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM47	24816	/* �ǔ�47�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ47	24821	/* �ǔ�47���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ47	24822	/* �ǔ�47��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ47	24823	/* �ǔ�47�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE48	24826	/* �ǔ�48�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC48	24827	/* �ǔ�48�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO48	24828	/* �ǔ�48��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO48	24829	/* �ǔ�48�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM48	24830	/* �ǔ�48�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM48	24831	/* �ǔ�48�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ48	24836	/* �ǔ�48���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ48	24837	/* �ǔ�48��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ48	24838	/* �ǔ�48�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE49	24841	/* �ǔ�49�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC49	24842	/* �ǔ�49�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO49	24843	/* �ǔ�49��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO49	24844	/* �ǔ�49�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM49	24845	/* �ǔ�49�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM49	24846	/* �ǔ�49�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ49	24851	/* �ǔ�49���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ49	24852	/* �ǔ�49��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ49	24853	/* �ǔ�49�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE50	24856	/* �ǔ�50�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC50	24857	/* �ǔ�50�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO50	24858	/* �ǔ�50��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO50	24859	/* �ǔ�50�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM50	24860	/* �ǔ�50�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM50	24861	/* �ǔ�50�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ50	24866	/* �ǔ�50���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ50	24867	/* �ǔ�50��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ50	24868	/* �ǔ�50�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE51	24871	/* �ǔ�51�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC51	24872	/* �ǔ�51�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO51	24873	/* �ǔ�51��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO51	24874	/* �ǔ�51�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM51	24875	/* �ǔ�51�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM51	24876	/* �ǔ�51�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ51	24881	/* �ǔ�51���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ51	24882	/* �ǔ�51��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ51	24883	/* �ǔ�51�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE52	24886	/* �ǔ�52�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC52	24887	/* �ǔ�52�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO52	24888	/* �ǔ�52��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO52	24889	/* �ǔ�52�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM52	24890	/* �ǔ�52�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM52	24891	/* �ǔ�52�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ52	24896	/* �ǔ�52���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ52	24897	/* �ǔ�52��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ52	24898	/* �ǔ�52�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE53	24901	/* �ǔ�53�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC53	24902	/* �ǔ�53�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO53	24903	/* �ǔ�53��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO53	24904	/* �ǔ�53�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM53	24905	/* �ǔ�53�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM53	24906	/* �ǔ�53�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ53	24911	/* �ǔ�53���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ53	24912	/* �ǔ�53��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ53	24913	/* �ǔ�53�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE54	24916	/* �ǔ�54�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC54	24917	/* �ǔ�54�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO54	24918	/* �ǔ�54��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO54	24919	/* �ǔ�54�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM54	24920	/* �ǔ�54�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM54	24921	/* �ǔ�54�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ54	24926	/* �ǔ�54���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ54	24927	/* �ǔ�54��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ54	24928	/* �ǔ�54�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE55	24931	/* �ǔ�55�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC55	24932	/* �ǔ�55�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO55	24933	/* �ǔ�55��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO55	24934	/* �ǔ�55�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM55	24935	/* �ǔ�55�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM55	24936	/* �ǔ�55�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ55	24941	/* �ǔ�55���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ55	24942	/* �ǔ�55��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ55	24943	/* �ǔ�55�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE56	24946	/* �ǔ�56�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC56	24947	/* �ǔ�56�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO56	24948	/* �ǔ�56��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO56	24949	/* �ǔ�56�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM56	24950	/* �ǔ�56�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM56	24951	/* �ǔ�56�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ56	24956	/* �ǔ�56���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ56	24957	/* �ǔ�56��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ56	24958	/* �ǔ�56�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE57	24961	/* �ǔ�57�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC57	24962	/* �ǔ�57�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO57	24963	/* �ǔ�57��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO57	24964	/* �ǔ�57�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM57	24965	/* �ǔ�57�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM57	24966	/* �ǔ�57�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ57	24971	/* �ǔ�57���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ57	24972	/* �ǔ�57��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ57	24973	/* �ǔ�57�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE58	24976	/* �ǔ�58�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC58	24977	/* �ǔ�58�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO58	24978	/* �ǔ�58��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO58	24979	/* �ǔ�58�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM58	24980	/* �ǔ�58�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM58	24981	/* �ǔ�58�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ58	24986	/* �ǔ�58���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ58	24987	/* �ǔ�58��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ58	24988	/* �ǔ�58�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE59	24991	/* �ǔ�59�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC59	24992	/* �ǔ�59�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO59	24993	/* �ǔ�59��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO59	24994	/* �ǔ�59�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM59	24995	/* �ǔ�59�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM59	24996	/* �ǔ�59�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ59	25001	/* �ǔ�59���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ59	25002	/* �ǔ�59��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ59	25003	/* �ǔ�59�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE60	25006	/* �ǔ�60�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC60	25007	/* �ǔ�60�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO60	25008	/* �ǔ�60��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO60	25009	/* �ǔ�60�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM60	25010	/* �ǔ�60�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM60	25011	/* �ǔ�60�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ60	25016	/* �ǔ�60���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ60	25017	/* �ǔ�60��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ60	25018	/* �ǔ�60�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE61	25021	/* �ǔ�61�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC61	25022	/* �ǔ�61�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO61	25023	/* �ǔ�61��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO61	25024	/* �ǔ�61�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM61	25025	/* �ǔ�61�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM61	25026	/* �ǔ�61�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ61	25031	/* �ǔ�61���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ61	25032	/* �ǔ�61��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ61	25033	/* �ǔ�61�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE62	25036	/* �ǔ�62�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC62	25037	/* �ǔ�62�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO62	25038	/* �ǔ�62��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO62	25039	/* �ǔ�62�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM62	25040	/* �ǔ�62�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM62	25041	/* �ǔ�62�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ62	25046	/* �ǔ�62���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ62	25047	/* �ǔ�62��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ62	25048	/* �ǔ�62�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE63	25051	/* �ǔ�63�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC63	25052	/* �ǔ�63�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO63	25053	/* �ǔ�63��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO63	25054	/* �ǔ�63�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM63	25055	/* �ǔ�63�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM63	25056	/* �ǔ�63�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ63	25061	/* �ǔ�63���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ63	25062	/* �ǔ�63��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ63	25063	/* �ǔ�63�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE64	25066	/* �ǔ�64�ǎ��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC64	25067	/* �ǔ�64�g���T�C�N���b�N�ݒ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO64	25068	/* �ǔ�64��L�ǐ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO64	25069	/* �ǔ�64�ǔ�	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM64	25070	/* �ǔ�64�����[�g�Ǔ_��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM64	25071	/* �ǔ�64�\��ǎw��	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ64	25076	/* �ǔ�64���M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ64	25077	/* �ǔ�64��M�o�b�t�@�T�C�Y	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ64	25078	/* �ǔ�64�����X�V�o�b�t�@�T�C�Y	*//* P1X-A247 */

/* ���_�[I/F�i���ʁj	*/
#define	M_SSEC_LDCM_LOADM_NAME(x)	(x)	/* ���[�h���[�^���́ix=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_LOADM_SCALE1(x)	(x + 10)	/* ���[�h���[�^�ڐ��R�����g1�s��(x=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_LOADM_UNIT(x)	(x + 20)	/* ���[�h���[�^�P�ʃR�����g(x=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_LOADM_SCALE2(x)	(x + 30)	/* ���[�h���[�^�ڐ��R�����g2�s��(x=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_SPWAIT_CMT(x)	(x + 100)	/* �厲�ҋ@�H��R�����g�ix=0�`4�j	*//* P1X-A006 */
#define	M_SSEC_LDCM_PLCSW_MSG(x)	(x + 200)	/* PLC�X�C�b�`���b�Z�[�W�ix=1�`64�j	*//* P1X-A006M */
#define	M_SSEC_LDCM_OPE_MODE	8700	/* ���샂�[�h	*/
#define	M_SSEC_LDCM_OPE_MODE_VAL	8800	/* ���샂�[�h�ݒ�l	*/
#define	M_SSEC_LDCM_RESET_REWIND	8900	/* ���Z�b�g�������C���h	*/
#define	M_SSEC_LDCM_STOP	9000	/* ����~	*/
#define	M_SSEC_LDCM_SINGL_STS	9100	/* �V���O���u���b�N���s���	*/
#define	M_SSEC_LDCM_SINGL_CMD	9200	/* �V���O���u���b�N���s��Ԑݒ�l	*/
#define	M_SSEC_LDCM_DRUN_STS	9300	/* �h���C�������s���	*/
#define	M_SSEC_LDCM_DRUN_CMD	9400	/* �h���C�������s��Ԑݒ�l	*/
#define	M_SSEC_LDCM_MLOCK_STS	9500	/* �}�V�����b�N���	*/
#define	M_SSEC_LDCM_MLOCK_CMD	9600	/* �}�V�����b�N��Ԑݒ�l	*/

/* ���_�[I/F�i���j	*/
#define	M_SSEC_LDAX_AMOT_STS_REV	9800	/* ���ړ���� -����	*/
#define	M_SSEC_LDAX_AMOT_STS_MOT	9810	/* ���ړ���� -���	*/
#define	M_SSEC_LDAX_AMOT_CMD_REV	9900	/* ���ړ���Ԑݒ�l�@-����	*/
#define	M_SSEC_LDAX_AMOT_CMD_MOT	9910	/* ���ړ���Ԑݒ�l�@-���	*/
#define	M_SSEC_LDAX_AXIS_TO	10000	/* ���ʒu�w��ړ�	*/
#define	M_SSEC_LDAX_AXIS_SPD	10100	/* �����葬�x	*/
#define	M_SSEC_LDAX_AXIS_SPD_CMD	10200	/* �����葬�x�ݒ�l	*/
#define	M_SSEC_LDAX_SV_FEED_ORIDE	10300	/* �T�[�{����FEED�I�[�o�[���C�h	*/
#define	M_SSEC_LDAX_SV_JOG_ORIDE	10400	/* �T�[�{����JOG�I�[�o�[���C�h	*/
#define	M_SSEC_LDAX_SV_RAPID_ORIDE	10500	/* �T�[�{����RAPID�I�[�o�[���C�h	*/
#define	M_SSEC_LDAX_SV_FEED_ORIDE_CMD	10600	/* �T�[�{����FEED�I�[�o�[���C�h�ݒ�l	*/
#define	M_SSEC_LDAX_SV_JOG_ORIDE_CMD	10700	/* �T�[�{����JOG�I�[�o�[���C�h�ݒ�l	*/
#define	M_SSEC_LDAX_SV_RAPID_ORIDE_CMD	10800	/* �T�[�{����RAPID�I�[�o�[���C�h�ݒ�l	*/
#define	M_SSEC_LDAX_AXIS_INTRLOC_STS	10900	/* ���C���^�[���b�N���	*/
#define	M_SSEC_LDAX_AXIS_INTRLOC_CMD	11000	/* ���C���^�[���b�N��Ԑݒ�l	*/
#define	M_SSEC_LDAX_SV_ON_STS	11600	/* �T�[�{�I�����	*/
#define	M_SSEC_LDAX_SV_ON_CMD	11700	/* �T�[�{�I����Ԑݒ�l	*/

/* ���_�[I/F�i�厲�j	*/
#define	M_SSEC_LDSP_SP_MOT_STS_REV	11800	/* �厲������ -����	*/
#define	M_SSEC_LDSP_SP_MOT_STS_MOT	11810	/* �厲������ -���	*/
#define	M_SSEC_LDSP_SP_MOT_CMD_REV	11900	/* �厲�����Ԑݒ�l -����	*/
#define	M_SSEC_LDSP_SP_MOT_CMD_MOT	11910	/* �厲�����Ԑݒ�l -���	*/
#define	M_SSEC_LDSP_SP_ORIENT_CW	12000	/* �厲��]�̒�p�ʒu CW��]	*/
#define	M_SSEC_LDSP_SP_ORIENT_CCW	12010	/* �厲��]�̒�p�ʒu CCW��]	*/
#define	M_SSEC_LDSP_SP_ORIENT_MOT	12020	/* �厲��]�̒�p�ʒu ���	*/
#define	M_SSEC_LDSP_SP_REV_SPD_CMD	12100	/* �厲��]���x�ݒ�l	*/
#define	M_SSEC_LDSP_SP_FEED_ORIDE	12200	/* �厲FEED�I�[�o���C�h	*/
#define	M_SSEC_LDSP_SP_FEED_ORIDE_CMD	12300	/* �厲FEED�I�[�o���C�h�ݒ�l	*/
#define	M_SSEC_LDSP_SP_CLAMP_STS	12600	/* �厲�N�����v���	*/
#define	M_SSEC_LDSP_TOL_CLAMP_STS	12700	/* �c�[���N�����v���	*/
#define	M_SSEC_LDSP_SP_CLAMP_CMD	12800	/* �厲�N�����v�ݒ���	*/
#define	M_SSEC_LDSP_TOL_CLAMP_CMD	12900	/* �c�[���N�����v�ݒ���	*/
#define	M_SSEC_LDSP_ORIENT_POS	13000	/* �厲��]�̒�p�ʒu�w��	*/
#define	M_SSEC_LDSP_ORIENT_ROT	13100	/* �厲��]�̒�p�ʒu��]���s	*/

/* ���[�U�J��I/F�p�����[�^	*/
#define	M_SSEC_UOPEN_SRAM_CMD_MAXSIZE	1	/* SRAM�J���g�p�\�e��	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_CMD_REMAIN	2	/* SRAM�J���󂫗e��	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_CLEAR	101	/* �f�o�C�X�J���p�����[�^ �N���A	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_CLEAR	102	/* SRAM   �J���p�����[�^ �N���A	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_DEV(x)	(x)	/* �f�o�C�X�J���p�����[�^�@�f�o�C�X���t(x=40001�`40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_TYPE(x)	(10000 + (x))	/* �f�o�C�X�J���p�����[�^�@�f�[�^�^(x=40001�`40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_NUM(x)	(20000 + (x))	/* �f�o�C�X�J���p�����[�^�@�f�[�^��(x=40001�`40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_DSP(x)	(30000 + (x))	/* �f�o�C�X�J���p�����[�^�@�\���`��(x=40001�`40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_TYPE(x)	(x)	/* SRAM�J���p�����[�^�@�f�[�^�^(x=41001�`41100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_NUM(x)	(10000 + (x))	/* SRAM�J���p�����[�^�@�f�[�^��(x=41001�`41100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_DSP(x)	(20000 + (x))	/* SRAM�J���p�����[�^�@�\���`��(x=41001�`41100)	*//* P1X-A412 */

/* ���[�U�J��I/F�f�[�^	*/
#define	M_SSEC_UOPEN_SRAM_DATA_41001(x)	(x)	/* #41001 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41002(x)	 (10000000 +(x))	/* #41002 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41003(x)	 (20000000 +(x))	/* #41003 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41004(x)	 (30000000 +(x))	/* #41004 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41005(x)	 (40000000 +(x))	/* #41005 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41006(x)	 (50000000 +(x))	/* #41006 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41007(x)	 (60000000 +(x))	/* #41007 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41008(x)	 (70000000 +(x))	/* #41008 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41009(x)	 (80000000 +(x))	/* #41009 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41010(x)	 (90000000 +(x))	/* #41010 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41011(x)	 (100000000 +(x))	/* #41011 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41012(x)	 (110000000 +(x))	/* #41012 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41013(x)	 (120000000 +(x))	/* #41013 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41014(x)	 (130000000 +(x))	/* #41014 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41015(x)	 (140000000 +(x))	/* #41015 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41016(x)	 (150000000 +(x))	/* #41016 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41017(x)	 (160000000 +(x))	/* #41017 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41018(x)	 (170000000 +(x))	/* #41018 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41019(x)	 (180000000 +(x))	/* #41019 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41020(x)	 (190000000 +(x))	/* #41020 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41021(x)	 (200000000 +(x))	/* #41021 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41022(x)	 (210000000 +(x))	/* #41022 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41023(x)	 (220000000 +(x))	/* #41023 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41024(x)	 (230000000 +(x))	/* #41024 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41025(x)	 (240000000 +(x))	/* #41025 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41026(x)	 (250000000 +(x))	/* #41026 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41027(x)	 (260000000 +(x))	/* #41027 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41028(x)	 (270000000 +(x))	/* #41028 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41029(x)	 (280000000 +(x))	/* #41029 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41030(x)	 (290000000 +(x))	/* #41030 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41031(x)	 (300000000 +(x))	/* #41031 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41032(x)	 (310000000 +(x))	/* #41032 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41033(x)	 (320000000 +(x))	/* #41033 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41034(x)	 (330000000 +(x))	/* #41034 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41035(x)	 (340000000 +(x))	/* #41035 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41036(x)	 (350000000 +(x))	/* #41036 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41037(x)	 (360000000 +(x))	/* #41037 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41038(x)	 (370000000 +(x))	/* #41038 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41039(x)	 (380000000 +(x))	/* #41039 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41040(x)	 (390000000 +(x))	/* #41040 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41041(x)	 (400000000 +(x))	/* #41041 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41042(x)	 (410000000 +(x))	/* #41042 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41043(x)	 (420000000 +(x))	/* #41043 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41044(x)	 (430000000 +(x))	/* #41044 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41045(x)	 (440000000 +(x))	/* #41045 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41046(x)	 (450000000 +(x))	/* #41046 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41047(x)	 (460000000 +(x))	/* #41047 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41048(x)	 (470000000 +(x))	/* #41048 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41049(x)	 (480000000 +(x))	/* #41049 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41050(x)	 (490000000 +(x))	/* #41050 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41051(x)	 (500000000 +(x))	/* #41051 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41052(x)	 (510000000 +(x))	/* #41052 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41053(x)	 (520000000 +(x))	/* #41053 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41054(x)	 (530000000 +(x))	/* #41054 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41055(x)	 (540000000 +(x))	/* #41055 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41056(x)	 (550000000 +(x))	/* #41056 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41057(x)	 (560000000 +(x))	/* #41057 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41058(x)	 (570000000 +(x))	/* #41058 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41059(x)	 (580000000 +(x))	/* #41059 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41060(x)	 (590000000 +(x))	/* #41060 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41061(x)	 (600000000 +(x))	/* #41061 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41062(x)	 (610000000 +(x))	/* #41062 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41063(x)	 (620000000 +(x))	/* #41063 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41064(x)	 (630000000 +(x))	/* #41064 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41065(x)	 (640000000 +(x))	/* #41065 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41066(x)	 (650000000 +(x))	/* #41066 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41067(x)	 (660000000 +(x))	/* #41067 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41068(x)	 (670000000 +(x))	/* #41068 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41069(x)	 (680000000 +(x))	/* #41069 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41070(x)	 (690000000 +(x))	/* #41070 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41071(x)	 (700000000 +(x))	/* #41071 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41072(x)	 (710000000 +(x))	/* #41072 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41073(x)	 (720000000 +(x))	/* #41073 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41074(x)	 (730000000 +(x))	/* #41074 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41075(x)	 (740000000 +(x))	/* #41075 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41076(x)	 (750000000 +(x))	/* #41076 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41077(x)	 (760000000 +(x))	/* #41077 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41078(x)	 (770000000 +(x))	/* #41078 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41079(x)	 (780000000 +(x))	/* #41079 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41080(x)	 (790000000 +(x))	/* #41080 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41081(x)	 (800000000 +(x))	/* #41081 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41082(x)	 (810000000 +(x))	/* #41082 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41083(x)	 (820000000 +(x))	/* #41083 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41084(x)	 (830000000 +(x))	/* #41084 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41085(x)	 (840000000 +(x))	/* #41085 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41086(x)	 (850000000 +(x))	/* #41086 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41087(x)	 (860000000 +(x))	/* #41087 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41088(x)	 (870000000 +(x))	/* #41088 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41089(x)	 (880000000 +(x))	/* #41089 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41090(x)	 (890000000 +(x))	/* #41090 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41091(x)	 (900000000 +(x))	/* #41091 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41092(x)	 (910000000 +(x))	/* #41092 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41093(x)	 (920000000 +(x))	/* #41093 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41094(x)	 (930000000 +(x))	/* #41094 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41095(x)	 (940000000 +(x))	/* #41095 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41096(x)	 (950000000 +(x))	/* #41096 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41097(x)	 (960000000 +(x))	/* #41097 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41098(x)	 (970000000 +(x))	/* #41098 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41099(x)	 (980000000 +(x))	/* #41099 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41100(x)	 (990000000 +(x))	/* #41100 SRAM�J���f�[�^(x=1-9999999)	*//* P1X-A412 */

/* �T�[�{�R�}���hI/F	*/
#define	M_SSEC_SV_CMD_PRM_SEND	1	/* �p�����[�^�]���v��	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MSIG_ADD	2	/* M�n����U�w��	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_MODE	3	/* �}���`�o�b�t�@���[�h	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_ADDR	4	/* �}���`�o�b�t�@�A�h���X(�Œ�p)	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA1	101	/* �}���`�o�b�t�@#1	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA2	102	/* �}���`�o�b�t�@#2	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA3	103	/* �}���`�o�b�t�@#3	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA4	104	/* �}���`�o�b�t�@#4	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA5	105	/* �}���`�o�b�t�@#5	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA6	106	/* �}���`�o�b�t�@#6	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA7	107	/* �}���`�o�b�t�@#7	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA8	108	/* �}���`�o�b�t�@#8	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_TRAN_OCCUPY	199	/* �g�����W�F���g��L�^�����ݒ�	*//* P1X-A145A */
#define	M_SSEC_SV_CMD_TRAN_REQSND	200	/* �g�����W�F���g�v�����M	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_TRAN_REQSET(x)	(201+(x))	/* �g�����W�F���g�v���Z�b�g(x=1�`2)	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_TRAN_AREA(x)	(211+(x))	/* �g�����W�F���g�񓚗̈� (x=1�`2)	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_AMPTYPE	221	/* �A���v�ڑ��^�C�v�i��/���^��)	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_MSIG_ADD_SP	1002	/* �厲 M�n����U�w��	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_OCCUPY_SP	1199	/* �厲 �g�����W�F���g��L/����	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_REQSND_SP	1200	/* �厲 �g�����W�F���g�v�����M	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_REQSET_SP(x)	(1201+(x))	/* �厲 �g�����W�F���g�v���Z�b�g(x=1�`2)	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_AREA_SP(x)	(1211+(x))	/* �厲 �g�����W�F���g�񓚗̈�(x=1�`2)	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_MSIG_ADD_PLC	2002	/* PLC�� M�n����U�w��	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_OCCUPY_PLC	2199	/* PLC�� �g�����W�F���g��L/����	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_REQSND_PLC	2200	/* PLC�� �g�����W�F���g�v�����M	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_REQSET_PLC(x)	2201+(x)	/* PLC�� �g�����W�F���g�v���Z�b�g(x=1�`2)	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_AREA_PLC(x)	2211+(x)	/* PLC�� �g�����W�F���g�񓚗̈�(x=1�`2)	*//* P1X-A145L */

/* �Ă˂��؂�	*/
#define	M_SSEC_RETHREAD_LEAD_POS	1	/* �Ă˂��؂胊�[�h���ʒu	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_ROT_POS	2	/* �Ă˂��؂��]���ʒu	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_REQ	3	/* �Ă˂��؂�v��	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_STS	4	/* �Ă˂��؂�X�e�[�^�X	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_ALLAX_SMZ	5	/* �Ă˂��؂�S���X���[�W���O�[��	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_LEAD_AX	6	/* �Ă˂��؂胊�[�h��(���r�b�g)	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_ROT_AX	7	/* �Ă˂��؂��]��(���r�b�g)	*//* P1X-A357D */

/* R-Navi�f�[�^	*/
#define	M_SSEC_RNAVI_TARGET_SURFACE_NO	1	/* ���H�Ώۖʂ̉��H��No	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_SURFACE_NAME	2	/* ���H�Ώۖʂ̉��H�ʖ���	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_WORK_NO	3	/* ���H�Ώۖʂ̃��[�NNo	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_WORK_NAME	4	/* ���H�Ώۖʂ̃��[�N����	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_SURFACE_SET	10	/* ���H�Ώۖʂ̐ݒ�E�L�����Z���i���[�NNo/���H��No�j	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_PRE_CHECK	20	/* ���H�ΏۖʑI�����O�`�F�b�N	*//* P1X-A451 */
#define	M_SSEC_RNAVI_INDEX_REQ_STATE	50	/* ���o�v���̏��	*//* P1X-A451 */
#define	M_SSEC_RNAVI_INDEX_REQUEST	51	/* ���o�v��	*//* P1X-A451 */
#define	M_SSEC_RNAVI_OFFSET_H_NO	52	/* �H��I�t�Z�b�g�ԍ�H�̐ݒ�	*//* P1X-A451Q */
#define	M_SSEC_RNAVI_INDEX_ERRNO	53	/* ���o�����̃G���[�ԍ��擾	*//* P1X-A451Q */
#define	M_SSEC_RNAVI_MANUAL_CRD_STS	54	/* R-Navi�蓮������W�n���	*//* P1X-A451S */
#define	M_SSEC_RNAVI_MANUAL_CRD_CHG	55	/* R-Navi�蓮������W�n�ؑ֗v��	*//* P1X-A451S */
#define	M_SSEC_RNAVI_WORK_AUTO_REGIST	200	/* �w�肵�����[�N�̑��ʎ����Z�b�g	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_CLEAR	201	/* �w�肵�����[�N�̍폜	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_COPY	202	/* �w�肵�����[�N�̃R�s�[	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_CLEAR	300	/* �w�肵�����H�� �̃N���A	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_COPY	301	/* �w�肵�����H�� �̃R�s�[	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_DATA_CHECK	400	/* �w�肵�����[�N�̐ݒ�l�`�F�b�N	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_DATA_CHECK	401	/* �w�肵�����H�ʂ̐ݒ�l�`�F�b�N	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_ROTATE_AXIS	500	/* ���H�ʂ̎�������]�w��	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_NAME(x)	(1000+(x))	/* ���[�N(x) ���� (��=1�`10)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_FORM(x)	(1100+(x))	/* ���[�N(x) �`�� (��=1�`10)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE1(x)	(1200+(x))	/* ���[�N(x) �T�C�Y+X(�~���F���SX) (��=1�`10) [�ϊ���]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE2(x)	(1300+(x))	/* ���[�N(x) �T�C�Y-X(�~���F���SY) (��=1�`10) [�ϊ���]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE3(x)	(1400+(x))	/* ���[�N(x) �T�C�Y+Y(�~���F���aR) (��=1�`10) [�ϊ���]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE4(x)	(1500+(x))	/* ���[�N(x) �T�C�Y-Y(�~���F+Z) (��=1�`10) ) [�ϊ���]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE5(x)	(1600+(x))	/* ���[�N(x) �T�C�Y+Z(�~���F-Z) (��=1�`10) ) [�ϊ���]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE6(x)	(1700+(x))	/* ���[�N(x) �T�C�Y-Z(�~���F���g�p) (��=1�`10) ) [�ϊ���]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_STDCOORD(x)	(1800+(x))	/* ���[�N(x) ����W�n(G54�`G59,G54.1P) (��=1�`10)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZEX(x)	(1900+(x))	/* ���[�N(x) �T�C�YX(�~���F���aD) (x=1�`10) [�ϊ��O]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SIZEY(x)	(2000+(x))	/* ���[�N(x) �T�C�YY(�~���F���g�p) (x=1�`10)  [�ϊ��O]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SIZEZ(x)	(2100+(x))	/* ���[�N(x) �T�C�YZ(�~���F����Z) (x=1�`10)  [�ϊ��O]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_STDNO(x)	(2200+(x))	/* ���[�N(x) �No(�~���F���g�p) (x=1�`10)  [�ϊ��O]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SHIFTX(x)	(2300+(x))	/* ���[�N(x) �V�t�g��X (x=1�`10)  [�ϊ��O]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SHIFTY(x)	(2400+(x))	/* ���[�N(x) �V�t�g��Y (x=1�`10)  [�ϊ��O]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SHIFTZ(x)	(2500+(x))	/* ���[�N(x) �V�t�g��Z (x=1�`10)  [�ϊ��O]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SURFACE_NAME(x,y)	(10000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) ���� (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ORIGIN_X(x,y)	(20000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) �t�B�[�`�����W���_X0 (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ORIGIN_Y(x,y)	(30000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) �t�B�[�`�����W���_Y0 (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ORIGIN_Z(x,y)	(40000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) �t�B�[�`�����W���_Z0 (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_INDEX_ANGLE1(x,y)	(50000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) ���� ���o�p�x (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_INDEX_ANGLE2(x,y)	(60000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) �c�� ���o�p�x (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS_PAIR(x,y)	(70000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) �������g���� (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_METHOD(x,y)	(80000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 1���� �w����� (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL1(x,y)	(90000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 1���� �ݒ�l1(X/TH1) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL2(x,y)	(100000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 1���� �ݒ�l2(Y/TH2) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL3(x,y)	(110000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 1���� �ݒ�l3(Z) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL4(x,y)	(120000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 1���� �ݒ�l4(+X) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL5(x,y)	(130000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 1���� �ݒ�l5(+Y) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL6(x,y)	(140000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 1���� �ݒ�l6(+Z�j (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_METHOD(x,y)	(150000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 2���� �w����� (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL1(x,y)	(160000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 2���� �ݒ�l1(X/TH1) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL2(x,y)	(170000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 2���� �ݒ�l2(Y/TH2) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL3(x,y)	(180000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 2���� �ݒ�l3(Z) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL4(x,y)	(190000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 2���� �ݒ�l4(+X) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL5(x,y)	(200000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 2���� �ݒ�l5(+Y) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL6(x,y)	(210000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) 2���� �ݒ�l6(+Z�j (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_XVECT1(x,y)	(500000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) X���x�N�g��(X����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_XVECT2(x,y)	(510000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) X���x�N�g��(Y����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_XVECT3(x,y)	(520000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) X���x�N�g��(Z����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_YVECT1(x,y)	(530000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) Y���x�N�g��(X����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_YVECT2(x,y)	(540000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) Y���x�N�g��(Y����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_YVECT3(x,y)	(550000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) Y���x�N�g��(Z����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ZVECT1(x,y)	(560000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) Z���x�N�g��(X����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ZVECT2(x,y)	(570000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) Z���x�N�g��(Y����) (��=1�`10,y=1�`17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ZVECT3(x,y)	(580000+((x)*100)+(y))	/* ���[�N(x)�̉��H��(y) Z���x�N�g��(Z����) (��=1�`10,y=1�`17)	*//* P1X-A451 */


#endif 
