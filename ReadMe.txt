# ModuleAndPlugin 과제 정리

## 1. 프로젝트 생성

Third Person C++ 프로젝트를 생성하고 프로젝트 이름을 `ModuleAndPlugin`으로 설정했습니다.


## 2. Test 모듈 생성

`Source/Test` 폴더를 만들고 `Test.Build.cs`, `Test.h`, `Test.cpp`를 추가했습니다.

`Test.Build.cs`에서는 `Core`, `CoreUObject`, `Engine` 모듈을 의존성으로 등록했습니다.

`Test.cpp`에서는 `IMPLEMENT_MODULE(FTestModule, Test)`를 사용해 `Test` 모듈을 Unreal에 등록했습니다.


## 3. Test 모듈 연결

`ModuleAndPlugin.Target.cs`와 `ModuleAndPluginEditor.Target.cs`의 `ExtraModuleNames`에 `Test`를 추가했습니다.

또한 `.uproject`의 `Modules` 항목에 `Test` 모듈을 추가하고 `LoadingPhase`를 `PreDefault`로 설정했습니다.


## 4. 모듈 간 상호작용 확인

`Test` 모듈에 `TestActor` 클래스를 만들고 `BeginPlay()`에서 화면 메시지를 출력하도록 했습니다.

기본 게임 모듈인 `ModuleAndPlugin`에서 `TestActor.h`를 include하고 `SpawnActor`를 사용해 `TestActor`를 생성했습니다.

이를 통해 기본 모듈에서 새로 만든 `Test` 모듈의 클래스를 참조할 수 있음을 확인했습니다.


## 5. Temporary 플러그인 생성

`Plugins/Temporary` 폴더를 만들고 `Temporary.uplugin` 파일을 작성했습니다.

플러그인 내부에는 `Source/Temporary` 모듈을 만들고 `Temporary.Build.cs`, `Temporary.h`, `Temporary.cpp`를 추가했습니다.

`Temporary.cpp`에서는 `IMPLEMENT_MODULE(FTemporaryModule, Temporary)`를 사용해 플러그인 모듈을 등록했습니다.


## 6. 플러그인 연결 및 검증

`.uproject`의 `Plugins` 항목에 `Temporary` 플러그인을 추가하고 `Enabled` 값을 `true`로 설정했습니다.

프로젝트 파일을 다시 생성한 뒤 Visual Studio에서 빌드했고, Unreal Editor에서 `Temporary` 플러그인이 활성화된 것을 확인했습니다.


## 7. 도전 기능 구현

`Temporary` 플러그인 모듈에 `UCharacterData` 클래스를 추가했습니다.

`UCharacterData`는 `UObject`를 상속받고, 캐릭터 이름, 체력, 이동 속도 값을 저장하도록 만들었습니다.

기본 캐릭터 클래스에서 `UCharacterData` 객체를 생성하고, 값을 화면에 출력해 플러그인 모듈의 클래스를 다른 모듈에서 참조할 수 있음을 확인했습니다.


## 확인 결과

게임 실행 시 화면에 `TestActor` 메시지와 `CharacterData` 값이 출력되는 것을 확인했습니다.

이를 통해 사용자 정의 모듈 생성, 모듈 연결, 플러그인 생성, 플러그인 모듈 참조가 정상적으로 동작하는 것을 확인했습니다.