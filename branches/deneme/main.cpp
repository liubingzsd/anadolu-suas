#include<cv.h>
#include <highgui.h>

using namespace cv;
int main(int argc, char **argv) {

	IplImage* img = cvLoadImage( "test.jpg" );  //Resmi IpImage tipinde yükle
	cvNamedWindow( "pencere_ismi", CV_WINDOW_AUTOSIZE ); //Pencere oluştur, büyüklüğünü otomatik ayarla.
	cvShowImage("pencere_ismi", img);	//Resmi pencerede göster
	cvWaitKey(0);	//Her hangi bir tuşa basılana kadar bekle
	cvReleaseImage( &img );	//Resmi serbest bırak
	cvDestroyWindow( "pencere_ismi" );	//Pencereyi kapat
	return 0;

}
