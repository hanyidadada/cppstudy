#include "port.h"

int main(void)
{
    Port p = Port("BB", "tawny", 12);
    p.Show();
    cout << p << endl;
    Port q = p;
    q.Show();
    q += 2;
    q.Show();
    q -= 12;
    q.Show();
    VintagePort vp = VintagePort();
    vp.Show();
    VintagePort vp2 = VintagePort(vp);
    vp2.Show();
    vp2 += 2;
    vp2.Show();
}
