#ifdef __cplusplus
extern "C" {
#endif

/*
IN	ImgP��ͼ��ָ�루256*288�ֽڣ�
OUT	TempletP������ָ�루512�ֽڣ�
OUT	TempGnd��������ָ�루����Ϊ8*8С��,0��ʾ��ͼ��1��ʾΪ������
OUT px1��py1�����ĵ�1���꣨������1��Ϊ0��ʾ���ĵ�1�����ڣ�
OUT	px2��py2�����ĵ�2���꣨������1��Ϊ0��ʾ���ĵ�2�����ڣ�
*/
int SY_GenChar(unsigned char * ImgP,
			   unsigned char *TempletP,
			   unsigned char TempGnd[36][32],
			   unsigned int* px1,unsigned int* py1,
			   unsigned int* px2,unsigned int* py2);

#ifdef __cplusplus
}
#endif
