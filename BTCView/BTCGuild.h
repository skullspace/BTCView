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

/*
 
 "hash_rate":2635578.04,
 "active_workers":9065,
 "round_shares":443583,
 "round_time":"0:13:19",
 "uswest_speed":395227.66,
 "useast_speed":562597.77,
 "nl_speed":360638.86,
 "nl2_speed":329037.44,
 "uscentral_speed":404896.11,
 "de_speed":583180.20
 
 {
 "user": {
 "confirmed_rewards":0.77587649,
 "unconfirmed_rewards":0.12843128,
 "estimated_rewards":0.00450873,
 "payouts":0.84
 },
 "workers": {
 "1": {
 "worker_name":"djsbx_btc",
 "hash_rate":238.61,
 "round_shares":40,
 "round_stales":4,
 "reset_shares":32719,
 "reset_stales":1207,
 "total_shares":32719,
 "total_stales":1207,
 "last_share":"0:00:08",
 "blocks_found":0
 }
 },
 "pool": {
 "hash_rate":2635578.04,
 "active_workers":9065,
 "round_shares":443583,
 "round_time":"0:13:19",
 "uswest_speed":395227.66,
 "useast_speed":562597.77,
 "nl_speed":360638.86,
 "nl2_speed":329037.44,
 "uscentral_speed":404896.11,
 "de_speed":583180.20
 }
 }
 
 */