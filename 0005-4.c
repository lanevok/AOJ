#include<stdio.h>

int main(void){
  double x,y;	//�Ώ�
  int x2,y2;	//lcm�v�Z�p(double��int�^�ϊ�)
  int i=2;		//for
  double a,c;	//�i�[double�^
  int b,d;		//�i�[int�^
  double max,min;	//����x,y�ɑ΂���max,min�̐ݒ�
  int result,flag;	//result��gcd���� flag��gcd�o�͔���
  
  while(scanf("%lf%lf",&x,&y)!=EOF){	//x,y�̓Ǎ��I���܂�
    flag=0;		//flag������
    if(x>y){	//x��y�Ƃ�max,min��ݒ�
      max=x;
      min=y;
    }
    else{
      max=y;
      min=x;
    }
    for(i=1;i<=min;i++){	//for���Bgcd�͂��Ȃ炸i=1�`min�ɂ���B
      a=max/i;				//�傫���̂��犄��
      b=a;					//double��int�̌^�ϊ�
      if(b-a==0){			//����؂ꂪ�����ōs������(ex 12/6��true
		c=min/a;									12/7��false)
		d=c;				//�������̂ł�����邩���肵�Č^�ϊ�
		if(d-c==0 && a==b){	//����؂ꂪ�s�������Ba==b�Ɋւ��Ă͊m���Ȃ��Ƃ��ؖ�
		  result=a;			//a�������Ȃ̂�int�Ɍ^�ϊ�
		  flag++;			//�o�͑ΏۂƂ���
		  break;			//for��������(�O�̂���)
		}
		else{
		  if(a*min==max && i!=1){ //����؂ꂪ�s���Ȃ��Ă���������������Ό��������ƂɂȂ�B
		    if(a<min)				//i��1�͂��Ȃ炸�񐔂Ƃ�̂ŗ�O
		      result=a;			//a<min�Ȃ�a������
		    else
		      result=min;		//min>a�Ȃ�min������
		    flag++;				//�܂� 4 100 �� 25 100 ���l�����Ă�B
		  }
		}
      }
    }
    if(flag==0)	//for���Ō������Ȃ�������1�����Ȃ�
      result=1;
    x2=x;		//x,y�̏o�ׂ͂̈̌^�ϊ�
    y2=y;
    printf("%d %d\n",result,x2/result*y2);
  }
  return(0);
}
