//
//  BaseClass.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Meta;
@protocol Data;

@interface BaseClass : NSObject <NSCoding>

@property(nonatomic, strong) Meta           *meta;
@property(nonatomic, strong) NSArray <Data> *data;

@end
