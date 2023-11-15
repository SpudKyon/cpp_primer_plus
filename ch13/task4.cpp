#include <cassert>
#include "port.h"

int main() {
    // 创建Port对象
    Port port1("Gallo", "tawny", 20);
    assert(port1.BottleCount() == 20);

    // 测试+=操作符
    port1 += 10;
    assert(port1.BottleCount() == 30);

    // 测试-=操作符
    port1 -= 5;
    assert(port1.BottleCount() == 25);

    // 创建VintagePort对象
    VintagePort vp1("Gallo", 20, "The Noble", 2023);
    assert(vp1.BottleCount() == 20);

    // 测试+=操作符
    vp1 += 10;
    assert(vp1.BottleCount() == 30);

    // 测试-=操作符
    vp1 -= 5;
    assert(vp1.BottleCount() == 25);

    std::cout << "All tests passed.\n";
    return 0;
}
