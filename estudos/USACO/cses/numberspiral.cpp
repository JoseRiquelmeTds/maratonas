#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    int t; cin >> t;

    while (t--)
    {
        int x, y; cin >> x >> y;
        int xval, yval;
        int resp;
        
        // TODO ESSE TRECHO CALCULA OS VALORES DAS "paredes"
        if (x%2==0) 
        {
            xval=x*x;
        }
        else
        {
            xval=((x-1)*(x-1))+1;
        }

        if(y%2==0)
        {
            yval=((y-1)*(y-1))+1;
            
        }
        else
        {
            yval=y*y;
            if (!yval) yval++;
        }
    
        // Aqui é PUTARIA mas basicamente ele descobre se tá crescendo ou diminuindo e calcula, usei ternario pra se aproximar mais da lógica matemática da minha cabeça
        if (x > y)
        {
            int soma = x%2?-y+1:+y-1;
            resp = xval - soma;
        }
        else
        {
            int soma = y%2?x-1:-x+1;
            resp = yval - soma;
        }

        cout << resp << endl;
    }
}