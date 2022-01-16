[→ Open in Slid](https://slid.cc/docs/6e9b5d41fe59423e90d3e88523c91315)


---


변수형




[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/3d031961-337f-4ca8-8c03-6e2825f18b58.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=631.8659088817444)


변수 선언 및 사칙연산 연산자 소개(+,-,\*,%,\*\*)




[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/45cfa05a-c8d9-4d81-87b7-fc7ecda24fdd.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=755.9434239427795)


변수형 타입이 다른 변수(ex. str + int) 같은 경우엔 합칠수 없다. 변수형 타입을 일치 시켜줘야 한다.

[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/1bf26cab-5ac9-4c3a-a3b6-bda7d60fa065.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=811.964089)


이런식으로 변수형의 타입을 맞춰주어야 에러가 나지 않는다.

[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/7d9e2096-5cab-4d62-9a68-b0d906f21747.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=935.8433590247955)


조건문 + and(조건의 둘 다 참일때 True)일때 예시

[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/8c9db64b-9e78-46b9-be21-28ffcca03179.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=966.2365579847412)


조건문 + or(조건의 둘중 하나가 참일때 True)일때 예시

[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/c204993e-772f-4cfb-9d55-ebcbe972c8da.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=1030.4616950915527)


조건문 if, elif(else if), else에 대한 간단한 예시. == -> 같다라는 의미의 연산자임.





함수 사용법

[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/9f7d72c7-c7cb-4e16-a877-fa34f187aa71.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=1254.9976550400543)


def을 통해 함수명을 정의하고, 그 안에 내용을 적는다.


함수를 작성할때 ()안의 입력받을 인자(입력값=name1, name2)를 입력하게 되면, 호출할때 넣은 입력값(chat(name1,name2)에 값이 저장되는 원리이다.


이를 통해 출력하고 싶은 문구 또는 기능에 입력값(인자)의 변경을 자유롭게 할 수 있다.




[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/a1479182-95b4-4a88-97c2-ef258e94446d.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=1315.1740228111726)


함수 인자 응용 1

[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/capture_images/6e9b5d41fe59423e90d3e88523c91315/e29ac36b-180d-4710-800a-f9d45fb75722.png)](https://slid.cc/vdocs/6e9b5d41fe59423e90d3e88523c91315?v=47c867ca506e43809c9fb4fb30f57831&start=1475.492095)


함수 인자 응용 2


return과 print의 차이 : 이 소스에서 d라는 변수에 dsum의 인자값(2, 4)를 받을때, print(d)로 받게 되면, 선언된 dsum의 바깥에는 result라는 값이 선언이 되어있지 않다. 그렇기 때문에 dsum(2,4)의 인자값만 받고, 반환값이 없기 때문에 None이라는 값이 뜨게 된다.


하지만 return result로 작성을 하게 되면, d의값을 출력할때 인자값을 받은 후에 반환값을 주기 때문에, 함수 밖에서 인자값을 넣고 출력을 해도 계산값을 얻을 수 있게 된다.




[![파이썬 속성 강의 (1) image](https://slid-capture.s3.ap-northeast-2.amazonaws.com/public/image_upload/6e9b5d41fe59423e90d3e88523c91315/87cef4f9-5516-497b-9ee2-0191db19ecd1.png)](undefined)


함수 인자 응용해서 코드 직접 짜보기









