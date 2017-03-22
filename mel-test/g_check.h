/******************************************** MELCO *****/
/*											 (Nx)		*/
/* <�t�@�C����> g_check.h								*/
/* <�@�\>		�`�F�b�N�`��f�[�^��`					*/
/* <�^�X�N��>											*/
/*														*/
/* COPYRIGHT (C) 2000 MITSUBISHI ELECTRIC CORPORATION	*/
/* ALL RIGHTS RESERVED									*/
/********************************************************/

#ifndef	INCg_checkh
#define	INCg_checkh

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

#define MAX_SYS_AXIS	8					//�n�����ő厲��

typedef struct							//�`����
{
	short		shape_mode;					//�`�󃂁[�h	
											//	0:�`��w�߂Ȃ��A1:�����A
											//	2:�b�v�~�ʁA3:�b�b�v�~�ʁA
											//	4:�b�v�Q�����A5:�b�b�v�Q�����A
											//	6:�b�v�w���J���A7:�b�b�v�w���J���A
											//	8:�b�v�Q�����w���J���A9:�b�b�v�Q�����w���J��
	short		arc_plane_i;				//�~�ʕ��ʉ���		
											//�~�ʕ��ʂ��\�����鉡���̌n�������ԍ�
											//	�n������1��:0�A��Q��:1�A...
	short		arc_plane_j;				//�~�ʕ��ʏc��		
											//�~�ʕ��ʂ��\������c���̌n�������ԍ�
											//	�n������1��:0�A��Q��:1�A...
	short		dummy ;						//�_�~�[		
	short		arc_pitch;					//�~�ʌJ��Ԃ���
	short		draw_axis_1;				//�`��Ώۑ�P��		
											//	�n������1��:0�A��Q��:1�A...
	short		draw_axis_2;				//�`��Ώۑ�Q��		
											//	�n������1��:0�A��Q��:1�A...
	short		draw_axis_3;				//�`��Ώۑ�R��		
											//	�n������1��:0�A��Q��:1�A...
	double		start_point[MAX_SYS_AXIS];
											//�@�B���W�n�n�_      MAX_SYS_AXIS�F�n��������
	double		end_point[MAX_SYS_AXIS];
											//�@�B���W�n�I�_      MAX_SYS_AXIS�F�n��������
	double		work_coord_start_point[MAX_SYS_AXIS];
											//���[�N���W�n�n�_    MAX_SYS_AXIS�F�n��������
	double		work_coord_end_point[MAX_SYS_AXIS];
											//���[�N���W�n�I�_    MAX_SYS_AXIS�F�n��������
	double		arc_center_point_h;			//�~�ʉ������S���W
	double		arc_center_point_v;			//�~�ʏc�����S���W
	double		radius;						//���a
} ShapeData;

typedef struct							//�O�Տ��
{
	short		move_mode;					//���샂�[�h
											//	0:�ړ��Ȃ��A1:��������ԁA2:�������ԁA
											//	3:�؍푗���ԁA4:�˂��؂��ԁA5:�X�L�b�v�A
											//	6:���t�@�����X�_���A
	short		dummy[3];					//�_�~�[
	ShapeData	shape_data;					//�`����
} PathData;

typedef struct							//�`�F�b�N�`����
{
	short		exec_status;				//�u���b�N���s���
											//	0:��~���A�������
											//	1:���s���i���Z�b�g�N�����A�u���b�N���s���j
											//	2:�v���O��������
											//	3:M0/M1��ۯ���~��
											//	4:�G���[
	short		abs_inc;					//��Α����f���[�_��
											//	0:���(G90)�A1:����(G91)
	short		fix_cycle;					//�Œ�T�C�N���f���[�_��(�}�V�Z��)
											//	0:G70�A1:G71�A2:G72�A3:G73�A4:G74�A5:G75�A
											//	6:G76�A7:G77�A8:G78�A9:G79�A10:G80�A11:G81�A
											//	12:G82�A13:G83�A14:G84�A15:G85�A16:G86�A17:G87�A
											//	18:G88�A19:G89
	short		tool_compen;				//�H��␳�f���[�_��
											//	0:G40�A1:G41�A2:G42
	short		current_work_coord_sys;		//���݂̃��[�N���W�n
											//	0:G54�A1:G55�A2:G56�A3:G57�A4:G58�A5:G59
											//	6:G54.1P1
	short		process_info;				//���H��� 0�F�ʏ� 1:�~�[�����O						// MA0-A059
	short		dummy[2];					//�_�~�[											// MA0-A059

	PathData	tool_path_data;				//�H��S�O�Տ��

	PathData	prg_path_data;				//�v���O�������S�O�Տ��

	long		m_code[4];					//M�R�[�h   0x80000000�F�w�߂Ȃ��A���L�ȊO�FM�R�[�h
	long		t_code;						//T�R�[�h   0x80000000�F�w�߂Ȃ��A���L�ȊO�FT�R�[�h
	long		d_number;					//�H��a�␳�ԍ����[�_��
	long		h_number[MAX_SYS_AXIS];		//�H��␳�ԍ����[�_�� MAX_SYS_AXIS�F�n��������
	long		f_modal;					//F���[�_��
	long		dummy1;						//��
	short		tool_offset[MAX_SYS_AXIS];	//�H��␳G���[�_�� 0:G43�A1:G44�A2:G49
	double		cylnd_radius;				//�~�����a
	char		dummy2[24];					//��
} CheckDraw;

#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/*INCg_checkh*/
