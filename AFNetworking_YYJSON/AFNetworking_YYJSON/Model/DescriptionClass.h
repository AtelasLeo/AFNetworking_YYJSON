//
//  DescriptionClass.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>

@class Entity;

@interface DescriptionClass : NSObject <YYJSONHelperProtocol>

@property(nonatomic, strong) NSString *text;
@property(nonatomic, strong) NSString *html;
@property(nonatomic, strong) Entity   *entities;

@end
