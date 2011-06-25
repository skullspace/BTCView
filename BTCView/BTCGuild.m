//
//  BTCGuild.m
//  BTCView
//
//  Created by Fernando Chorney on 11-06-24.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "BTCGuild.h"

@implementation BTCGuild

@synthesize userData = _userData;
@synthesize workers = _workers;
@synthesize poolData = _poolData;

- (id)initWithAPIKey:(NSString *)APIKey {
    if ((self = [super init])) {
        self.userData = nil;
        self.workers = nil;
        self.poolData = nil;
        
        [self setAPIKey:APIKey];
    }
    return self;
}

- (void)queryServer {
    
}

- (void)dealloc {
    [_userData release];
    [_workers release];
    [_poolData release];
    [super dealloc];
}

@end

@implementation BTCGuild (UserDefaults)

- (void)setAPIKey:(NSString *)APIKey {
    [[NSUserDefaults standardUserDefaults] setObject:APIKey forKey:API_KEY_STRING];
}

- (NSString *)getAPIKey {
    return [[NSUserDefaults standardUserDefaults] objectForKey:API_KEY_STRING];
}

@end