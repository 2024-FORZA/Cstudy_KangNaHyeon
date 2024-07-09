//1247
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int i, j, num, sum, limit, p, n, max = 9223372036854775807; //9223372036854775807 까지의 수를 다룰 것이므로 long long int로 자료형 크기 설정해야 함

	for (i = 0; i < 3; ++i) {
		sum = 0;
		p = 0;
		n = 0;
		scanf("%lld", &limit);
		for (j = 0; j < limit; ++j) {
			scanf("%lld", &num); //백준에서 정해뒀듯, num은 -max~max 넘지 않음
			if (sum > 0) {
				//sum+num시 max,-max의 경계를 넘는 경우 (num이 '기존 sum(양수)에서 max까지 남은 거리(=max-sum)'를 넘겼을 때 (num+sum>max일 때라 생각하면 좀 더 직관적) or num==max일 때)
				if (num > -sum + max || num == -sum + max || num == max) {
					sum = sum + (num - max); //num은 백준 문제에 따라 max보다 작거나 같으므로, 여기 num에서 max 뺌으로써 max 끄집어내는 거 상쇄해준 후,
					p++; //여기서 p++으로 'max 개수' counting 하는 것, 그런 후 남은 수를 기존 sum과 더해서 새로운 sum으로 재정의
				}
				//sum+num시 max,-max의 경계를 넘지 않는 경우
				else {
					sum += num;
				}
			}
			else if (sum < 0) {
				//sum+num시 max,-max의 경계를 넘는 경우 (num이 '기존 sum(음수)에서 -max까지 남은 거리(=max-sum)'를 넘겼을 때 (num+sum<-max일 때라 생각하면 좀 더 직관적) or num==-max일 때)
				if (num < -sum - max || num == -sum - max || num == -max) {
					sum = sum +(num + max); //num은 백준 문제에 따라 -max보다 크거나 같으므로, 여기 num에서 max 더함으로써 -max 끄집어내는 거 상쇄해준 후,
					n++; //여기서 n++으로 '-max 개수' counting 하는 것, 그런 후 남은 수를 기존 sum과 더해서 새로운 sum으로 재정의
				}
				//sum+num시 max,-max의 경계를 넘지 않는 경우
				else {
					sum += num;
				}
			}
			//sum+num시 max,-max의 경계를 넘지 않는 경우
			else {
				sum += num;
				//이 조건문 없으면 처음에 sum=0이기에 sum = max or -max 여도 p++ or n++ 안되서 추가함 (이건 예시 몇 개 들어봄으로써 찾은 추가조건) 
				if (sum == max) {
					sum -= max;
					p++;
				}
				else if (sum == -max) {
					sum += max;
					n++;
				}
			}
		}

		//p!=n && sum과 p,n 부호 다르면, p와 n이 sum에 덜 계산된 채 계산 끝나게 됨.
		//ex) (p,n,sum)일 때 (2,1,-max+1)이면 p가 sum에 덜 계산된 채 계산 끝나게 됨(차례대로 p,n에 더하며 one after another식으로 계산하다보니 이런 일 생기는 듯). p에서 1개 덜어서 sum에 더하면 (1,1,1)로 계산 마무리 지을 수 있음
		//백준 채점기 살짝 불완전한 듯? sum<0, sum>0 조건에 없어도 맞았다고 했음. 이거 없으면 반례 num= max,1 넣었을 때 최종 (0,0,-max+1) 되버림. (근데도 맞았다고 나왔었음)
		if (p != n && p > 0 && sum<0) {
			sum += max;
			p -= 1;
		}
		else if (p != n && n > 0 && sum>0) {
			sum -= max;
			n -= 1;
		}

		//p(max개수) n(-max개수) 기준 +,-,0 판단 -> 마지막에 남은 sum으로 +,-,0 판단(숫자 비교 시 자릿수 먼저 비교 후 자릿수 같으면 안에 세부 숫자 각각 비교하는 느낌)
		if (p > n) {
			printf("+");
		}
		else if (p < n) {
			printf("-");
		}
		else {
			if (sum > 0) {
				printf("+");
			}
			else if (sum < 0) {
				printf("-");
			}
			else {
				printf("0");
			}
		}
		if (i < 2) {
			printf("\n"); //+,-,0 첫번째, 두번째 세트까지는 붙어서 안나오게 (위에 printf문에 붙이면 마지막에 \n 반영되서 백준에서 출력 형식 오류로 틀렸다 할 것 같았음)
		}
	}
	return 0;
}

//극단적인 값 넣기 (논리 오류 잡는 법)
//-9223372036854775807 6번 넣었더니 +로 출력함. long long int로 받을 수 있는 범위 넘어섬(sum을 문자로 나타내야 함)

/*5일동안 38번 시도해서 맞은 문제: (max=9223372036854775807(long long int 자료형 범위 최대값, -max는 이거 최소값)라 하자)
1. 초반에는 sum이 max 초과할거라 생각 못하고 짬
2. 틀릴 부분 없는데 계속 틀리길래 이상해서 구글링 해봄 
>> 'sum이 max 혹은 -max 넘기면 안되니까' '문자로 계산' 해야 한다고 함. 근데 문자로 계산하려면 내장함수 안쓰고는 문자를 숫자처럼 '사칙연산 규칙' 일일이 규정해줘야 해서 길고 복잡해질 거라 생각함. 
>> 숫자로 계산, 방향 유지 결정
3. 'max,-max'를 sum, num이 넘으면 안되므로 num 선에서 'max,-max' 넘을 때 처리하기로 함
>> (큰 틀 잡음) 'num 선에서 'max,-max' 넘는 거 예방해야겠다.' 싶었음 (num에서 무언가 처리해서 num+sum이 'max,-max' 넘기지 않겠끔)
>> 2개의 배열을 추가해서, ('max' 기준으로 설명하지면) 배열 속 원소 크기가 'max' 넘기면 다음 인덱스에서 다시 'max'까지 채우는 형식으로 논리 생각함 (이래두고 max,-max 개수 비교하고 이 개수 같으면 마지막 인덱스 속 원소 크기 비교해서 크기 비교 하려 함)
4. 중간에 예제를 넣고 코드 고치다가 계속 틀림 (example->Generalization은, G를 어느정도 완성시키지 않은 이상, 좋은 방법 아님)
5. 흰종이에 case 다시 나눠봄(G의 case를 더 꼼꼼히 따지기 시작)
>> 배열 대신 p,n으로 각각 max, -max 개수만 세는거로 함
>> 큰 틀: 위에 적은 거 참고
*/