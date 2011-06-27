//
//  BTCGuild.h
//  BTCView
//
//  Created by Fernando Chorney on 11-06-24.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "BTCGuildUserData.h"
#import "BTCGuildWorker.h"
#import "BTCGuildPoolData.h"

#define API_URL_STRING https://www.btcguild.com/api.php?api_key=
#define API_KEY_STRING @"BTC_GUILD_API_KEY"

@interface BTCGuild : NSObject {
@private
    BTCGuildUserData *_userData;
    NSArray *_workers;
    BTCGuildPoolData *_poolData;    
}

@property (nonatomic, retain) BTCGuildUserData *userData;
@property (nonatomic, retain) NSArray *workers;
@property (nonatomic, retain) BTCGuildPoolData *poolData;

- (id)initWithAPIKey:(NSString *)APIKey;
- (void)queryServer;

@end

@interface BTCGuild (UserDefaults)

- (void)setAPIKey:(NSString *)APIKey;
- (NSString *)getAPIKey;

@end
