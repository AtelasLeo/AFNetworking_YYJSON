//
//  AvatarImage.m
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "AvatarImage.h"


@implementation AvatarImage
+ (void)initialize
{
    [super initialize];
    [self bindYYJSONKey:@"url" toProperty:@"URLString"];
}

@end
