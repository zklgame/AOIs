//
//  TowerAOITest.cpp
//  AOIs
//
//  Created by zklgame on 5/3/16.
//  Copyright © 2016 Zhejiang University. All rights reserved.
//

#include "BasePerformanceTest.hpp"
#include "../../AOIServices/TowerAOIService.hpp"

int main14() {
    
    int i = 4;
    cout << "Test " << i + 1 << " :" << endl;
    BasePerformanceTest *test = new BasePerformanceTest();
    test -> world -> aoi = new TowerAOIService(test -> world -> width, test -> world -> length, 100, 100);
    test -> test(i + 1);
    delete test -> world -> aoi;
    delete test;

    return 0;
}