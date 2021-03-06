//
//  FRTableViewModel.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRTableViewModelProtocol.h"

@interface FRTableViewModel : NSObject<FRTableViewModelProtocol>

@property (readonly, nonatomic, getter = getSections) NSArray *tableViewModelSections;

+ (instancetype) new NS_UNAVAILABLE;

@end
