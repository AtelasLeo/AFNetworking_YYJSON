//
//  CoverImage.m
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <YYJSONHelper/YYJSONHelper.h>
#import "CoverImage.h"


@implementation CoverImage

+ (void)initialize
{
    [super initialize];
    [self bindYYJSONKey:@"is_default" toProperty:@"isDefault"];
}


@end
