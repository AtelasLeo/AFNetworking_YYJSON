//
//  Meta.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>


@interface Meta : NSObject <YYJSONHelperProtocol>

@property(nonatomic, strong) NSString *max_id;
@property(nonatomic, strong) NSString *min_id;
@property(nonatomic, assign) double   code;
@property(nonatomic, assign) BOOL     more;

@end
