# VR 햅틱 진동 데이터 개발 툴에 대해
* 개요  
　본 프로그램은 현재 오큘리스 리프트 기기 전용으로 제작되고 있습니다.
　오큘리스 리프트에는 흥미롭게도 콘트롤러 진동 부분에 버퍼기능을 포함한 Buffered Haptic 이라는 기능이 있습니다. 이 기능을 잘 활용할 경우 매우 다양한 진동 데이터를 생성, 다양한 콘텐츠에 적용이 가능합니다. 아쉽게도 이 기능은 직접적으로 0~255라는 수를 배치하는 불편함을 포함하고 있습니다. 
　일반적으로 유니티에서 제공하는 사운드 파일의 자동 진동 데이터화 기능을 많이 사용하십니다만, 이 데이터를 수정하고 싶거나 소리가 없는 상황에서 진동을 만들고 싶을 때 이 기능은 활용이 어렵습니다. 이런 문제를 타파해 보고자 햅틱 진동 데이터 툴을 개발했습니다.
　
　
* 활용툴 버전 정보
    * 비주얼 스튜디오 C++ 2017 혹은 그 이상 버전   
      https://docs.microsoft.com/ko-kr/visualstudio/productinfo/installing-an-earlier-release-of-vs2017  
      
    * UI를 적용한 전체 프레임을 구성하기 위해 오픈소스 중 Qt를 이용 
      : 
        - Qt버전 5.11.1 에서 작업 
        - Qt 5.12.9 동작확인 (Download for Opensource user)
        https://www.qt.io/download  
        
     * 비주얼 스튜디오 설정을 위해 Qt tool for VS 2017 다운로드 필요 (비주얼 스튜디오 버전에 맞게 선택)
      https://marketplace.visualstudio.com/items?itemName=TheQtCompany.QtVisualStudioTools-19123  
     
     * 그래프 움직임 적용에 Qtustomplot 적용 
    * Oculus SDK 1.30.0 에서 테스트

# 사용 방법
* 기본 사용법
　사용 전 우선적으로 오큘리스 리프트 기본 프로그램을 설치하고 기기 설치를 완료합니다.
　빌드된 본 프로그램을 실행하면 자동적으로 오큘리스 리프트 기본 프로그램이 동작하며 HDM가 On 됩니다. 본 프로그램을 사용하는 동안 HMD를 쓰고 있을 필요는 없습니다. HMD 안쪽 센터에 보이는 센서 부분을 검은 천이나 헝겊 등으로 가려주세요.
　사용할 콘트롤러를 선택하면 자동적으로 콘트롤러와의 연결이 완료됩니다.
　이 후 진동 데이터 개발 프로세스는 일반 사운드나 영상 편집 과정과 동일하게 구성하였습니다.

* 상세 사용법
 본 사용법은 나중에 위키 페이지 등을 통해 상세한 매뉴얼을 만들어 제공해 드리도록 하겠습니다. 기본 동작 로직은 과거 사용되어 온 에디터들과 동일하게 구성하였으므로 크게 사용 상에 어려움은 없을 것입니다.

# 커뮤니티
　Git Issue 참고

# License
 본 프로그램은 GPLv3 라이선스의 보호를 받습니다. 
 
 
 
# About Developing tools for VR Haptic vibration
* Index  
　This project is based on Oculus Rift device. Interstingly, Oculus Rift has buffered haptic on their controller vibration logic. 
　If user use buffered haptic function properly, user can create various vibration data and use that on their contents. But there is one minor problem that user need to input 0-255 number data to tool. 
　Usually, a lot of Oculuse rift user uses unity's auto converting tools which unity provides, but that tools doesn't support modifying function or function to create vibration data without sound file. we are working on those problems with this project. 

* Version information for developing tools
    * Visual Studio C++ 2017 or above
    * Used Opensource project Qt for creating UI frame: 
        - Used Qt version 5.11.1 for developing
        - Confirmed compatibility with Qt 5.12.9 (Download for Opensource user)
     * Requires to download Qt tool for VS 2017 for Visual Studio setting (Based on Visual studio version)
     * Used Qtustomplot for chart movements. 
     * Tested with Oculus SDK 1.30.0

# Manual
* Basic operation
　Before start to use our project, you need to install Oculus rift default programs and setup devices. 
　Run this project will initiate oculus rift default program and HDM function will be turned "ON". You don't need to wear HMD while you use this project. Just cover HDM's inner sensor with textile or clothes. 
　When you select controller which you want to use, program will connect with that controllers.
　All vibration data creation process will be similar with sound edting process or video editing process. 

* Detailed Manaual 
This manual for tools will be published with Wiki pages. This tools uses default logic which is popular with other tools, so we think there should be no problem at all. 

# Community
　Git Issue

# License
 This licese is protected by GPLv3 License.

