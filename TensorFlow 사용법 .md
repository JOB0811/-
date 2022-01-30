[→ Open in Slid](https://slid.cc/docs/95ee16aa29814a33805c78f28f0d67eb)


---










[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/04da3f75-100d-4fbf-a18b-e4ef1468dedf.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=161.67455285313414)


graph: 노드(요소)와 엣지(그것들을 이은 선)으로 이루어져 있는데, 이를 Operation, 혹은 Tensor 라고도 할수있다.


Data Flow Graph는 이런 노드들에 연산값을 넣어 Tensor끼리 작용을 하고, 이로 인해 원하는 값을 얻게 되는 것을 의미한다.


Tensor Flow는 이러한 일련의 과정을 도와주는 소프트웨어라고 볼 수 있다.




[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/3d0efa46-a0fe-433c-9e89-6778a9209974.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=446.74805890653994)





Hello, TensorFlow!를 출력하는 방법: tf.xx()로 시작하는 constant를 하나 생성함.


sess = 라는변수에 tf.Session() (생성한 Constant를 실행하는 기능)을 생성함.


sess.run(hello)라는 명령어를 통해 실행함.




[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/56e80903-c4a9-49dc-8d7c-e0627efd25a0.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=599.4711869790192)





node를 이용한 Tensor Flow 그래프 작성의 예시(1)




[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/800d13b4-5a0d-4376-8a0a-6b2339b45199.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=638.3196700591278)


텐서플로우의 매커니즘

1. TensorFlow의 Operations(노드 요소들)을 사용하는 그래프를 작성한다.

2. sess.run()을 통해 data의 값을 인풋(삽입)하고 작성한 Graph의 Operations를 실행시킨다.

3. 그래프의 variables 요소들을 Update하거나, 작성한 Operations의 return values(값의 반환)을 받는다.




[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/76dec77f-89cb-4b58-ac59-6c907f08baaa.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=675.4077129027252)


그래프 코드 작성의 예시

[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/30ea2697-ea72-4639-bf47-28ba306a4bb6.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=822.7023721182557)


tf.Placeholder()의 사용 예시 절차

1. a,b라는 노드에 tf.placeholder(tf.float32)의 값을 지정을 한다.

2. adder\_node = a + b ->a와 b의 노드를 합치는 노드를 추가 생성한다.

3. sess.run(op) -> print(sess.run(adder\_node, feed\_dict(a: 3. b: 4.5)))작성한 노드에 Input하는 기능 feed\_dict()를 이용해 각각의 Value 값을 출력한다.




[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/ed084963-bfd9-4718-bcc1-0776f410ff76.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=918.7821571296997)




[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/e9b82cf9-0caa-46f7-8f0a-dcf0d31446e8.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=990.559389120163)




[![TensorFlow 사용법  image](https://slid-users-assets-v1-seoul.s3.ap-northeast-2.amazonaws.com/public/capture_images/95ee16aa29814a33805c78f28f0d67eb/8e85f131-ec1e-4c0d-9290-121a88e13941.png)](https://slid.cc/vdocs/95ee16aa29814a33805c78f28f0d67eb?v=7521d233903e4d3abe7e2a5cec75aaf6&start=1010.2588819046325)






