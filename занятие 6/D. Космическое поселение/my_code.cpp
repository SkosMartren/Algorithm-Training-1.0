#include<string>
#include<iostream>
#include<vector>

using namespace std;
using ull = unsigned long long;

ull GetMaxThicknessAdditionalProtection(ull n, ull a, ull b, ull w, ull h) {

	ull Left = 0; // можно ли использовать не 0, а -1 и безнаковый тип? Можно, но тогда пришлось бы отдельно обрабатывать случай, когда оба ответа равны -1 --> больше кода
	ull Righ = min(w, h) / 2  + 1;

	while (1 != Righ - Left) {

		const ull mid = (Righ + Left) / 2; // mid == толщина дополнительной защиты

		const ull F = w / (a + 2 * mid);
		const ull L = h / (b + 2 * mid);

		// почему ответ Left?
		// если можно установить защиту толщиной mid, то можно установить и меньшую защиту --> максимум из минимумов, то есть ответ слева. 
		if (F * L >= n) { // F * L -- количество жилых модулей с толщина дополнительной защиты равной mid 
			Left = mid;
		}
		else {
			Righ = mid;
		}

	}

	return Left;
}

int main() {

	ull n, a, b, w, h;
	cin >> n >> a >> b >> w >> h;

	cout << max( // как доказать, что надо рассматривать два расположения комплексов в прямоугольнике? Легко: взять комплекс длины 2*5 и прямоугольник 7*12 
				 // с толщина дополнительной защиты 1 -- в одном расположении можно устанвить 3, в ином 1
				GetMaxThicknessAdditionalProtection(n, a, b, w, h),
				GetMaxThicknessAdditionalProtection(n, b, a, w, h)
			   );
}
/*
3 2 5 7 12
1

3 2 5 1 1
0
*/
