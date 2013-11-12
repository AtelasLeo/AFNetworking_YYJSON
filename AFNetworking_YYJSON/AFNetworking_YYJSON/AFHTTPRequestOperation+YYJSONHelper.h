//
// Created by ivan on 13-11-12.
//
//


#import <Foundation/Foundation.h>
#import "AFHTTPRequestOperation.h"

@interface AFHTTPRequestOperation (YYJSONHelper)

- (id)responseObjectOfClass:(Class)clazz;

- (id)responseObjectsOfClass:(Class)clazz;

- (id)responseObjectOfClass:(Class)clazz forKey:(id)key;

- (id)responseObjectsOfClass:(Class)clazz forKey:(id)key;

- (id)responseObjectOfModelName:(NSString *)modelName;

- (id)responseObjectsOfModelName:(NSString *)modelName;

- (id)responseObjectOfModelName:(NSString *)modelName forKey:(id)key;

- (id)responseObjectsOfModelName:(NSString *)modelName forKey:(id)key;

@end