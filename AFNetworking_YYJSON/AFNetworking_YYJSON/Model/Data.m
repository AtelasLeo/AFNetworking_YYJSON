//
//  Data.m
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "Data.h"

@implementation Data

+ (void)initialize
{
    [super initialize];
    [self bindYYJSONKey:@"id" toProperty:@"dataIdentifier"];
}


@end
