// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 COLORDLL_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// COLORDLL_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef COLORDLL_EXPORTS
#define COLORDLL_API __declspec(dllexport)
#else
#define COLORDLL_API __declspec(dllimport)
#endif

#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>

using namespace cv;

//// 此类是从 ColorDll.dll 导出的
//class COLORDLL_API CColorDll {
//public:
//	CColorDll(void);
//	// TODO:  在此添加您的方法。
//};
//
//extern COLORDLL_API int nColorDll;

COLORDLL_API int CalROI(Mat &img,int &sx, int &sy, int &w, int &h,int roi_border);//在图像img上，(sx,sy)位起始点，w*h的检测区域中，获取试纸区域，并向内收缩roi_border像素，更新检测区域
COLORDLL_API void CalRGB(Mat &img, int &sx, int &sy, int &w, int &h, int &r, int &g, int &b);//计算img上，(sx,sy)位起始点，w*h的区域中，r,g,b三通道的平均值
COLORDLL_API int CompareRGB(int &r, int &g, int &b,int dst_r,int dst_g,int dst_b, int thre);//比较两个颜色是否相同，差值小于thre认为颜色相同
