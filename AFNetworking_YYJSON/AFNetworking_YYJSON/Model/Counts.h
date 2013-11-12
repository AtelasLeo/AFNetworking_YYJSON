//
//  Counts.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>


@interface Counts : NSObject <YYJSONHelperProtocol>

@property(nonatomic, assign) double posts;
@property(nonatomic, assign) double stars;
@property(nonatomic, assign) double followers;
@property(nonatomic, assign) double following;


@end
