#include "golf.h"

int main(){
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    handicap(ann, 111);
    showgolf(ann);

    golf andy;
    setgolf(andy);
    showgolf(andy);
    return 0;
}
