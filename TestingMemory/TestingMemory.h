//
//  TestingMemory.h
//  aabcad
//
//  Created by CYJ on 16/4/8.
//  Copyright © 2016年 CYJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sys/sysctl.h>
#import <mach/mach.h>

@interface TestingMemory : NSObject

//获取当前设备可用内存
+ (double)availableMemory;

//获取当前任务所占用内存
+ (double)usedMemory;

@end
