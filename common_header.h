#pragma once
//                              @@                                @@                                  
//                             @@@@                             @@@@@                                 
//                          @@@@@@@@@@                         @@@@@@@@@                         
//                   @@@@@@@@@@@@@@@@@@@@@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@                       
//                    @@@@@@@@@@@@@@@@@@@@@@           @@@@@@@@@@@@@@@@@@@@@@@                        
//                             @@@@@                            @@@@@                                 
//                             @@@@@                            @@@@@                                 
//                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                 
//                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                 
//                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                  
//                                     @@@@@@@@@@@@@@@@@@@@@@                                         
//                                       @@@@@@@@@@@@@@@@@@                                           
//                                           @@@@@@@@@@                                               
//                                           @@@@@@@@@                                                
//                                             @@@@@@                                                 
//                                    @@@@@@@@@@@@@@@@@@@@@@@                                         
//                                    @@@    @@@@@@@@@@@@@@@@@                                        
//                                    @@@@@@@@@@@@       @@@@@                                        
//                                    @@@@@@@@@@@     @@  @@@@                                        
//                                    @@@@@@@@@@@     @@  @@@@                                        
//                                    @@@@@@@@@@@@       @@@@@                                        
//                                    @@@@@@@@@@@@@@@@@@@@@@@@                                        
//                                     @@@@@@@@@@@@@@@@@@@@@@                                         
//                                                                                                    
//@@      @@     @@@   @@      @@  @@@@@@@   @@@@@@@    @@@@@@@      @@@@@@   @@@@@@@  @@@@@@   @@@@@
//@@      @@    @@@@    @@     @@  @@  @@@   @@  @@@   @@@   @@@    @@@   @@ @@@      @@@  @@  @@   @@
//@@      @@    @@@@@   @@     @@  @@    @@  @@   @@@  @@      @@  @@@       @@@      @@       @@     
//@@      @@    @@ @@   @@    @@   @@    @@  @@   @@  @@@      @@  @@        @@@      @@@      @@@    
//@@      @@   @@  @@    @@   @@   @@   @@@  @@@@@@@  @@       @@  @@        @@@@@@@   @@@@     @@@@  
//@@      @@   @@   @@   @@  @@    @@@@@@@   @@@@@@   @@       @@  @@        @@@@@@@    @@@@     @@@@ 
//@@      @@  @@@@@@@@   @@@ @@    @@@@@     @@  @@@  @@       @@  @@        @@@           @@      @@@
//@@@     @@  @@@@@@@@@   @@ @@    @@        @@   @@  @@@      @@  @@        @@@           @@@      @@
// @@    @@   @@     @@   @@@@     @@        @@   @@   @@     @@@  @@@     @ @@@           @@       @@
// @@@@@@@@  @@      @@    @@@     @@        @@    @@   @@@@@@@@    @@@@@@@@ @@@@@@@  @@@@@@@ @@@@@@@@
// 
//�������
typedef long UAVErr;

//�궨�ṹ��
typedef struct calib{
    double _flen_x_;
    double _flen_y_;
    double _ppx_;
    double _ppy_;
    double _ccd_size_;
}UAVCalibParams;

//parameters type
typedef enum paramtype{
	PARAMList,
	PARAMFeature,
	PARAMMatch,
	PARAMBundle,
	PARAMGeocorrect,
	PARAMDense
}PARAMTYPE;

typedef enum proctype{
	PROCList,
	PROCFeatureGpuSIFT,
	PROCFeatureCpuSIFT,
	PROCMatchFundmatrix,
	PROCMatchEssentialmatrix,
	PROCBundleSequence,
	PROCBundleGlobal,
	PROCGeocorrect,
	PROCGeocorrectDEM,
	PROCMosaic,
	PROCDense
}PROCTYPE;

//������
typedef int (*UAVProgressFunc)(double dfComplete, const char *pszMessage, void *pProgressArg);

#define PI 3.1415926534
#define PI_M2 PI*PI
#define PI_D2 PI/2