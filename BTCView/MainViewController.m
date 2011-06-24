//
//  MainViewController.m
//  BTCView
//
//  Created by Fernando Chorney on 11-06-18.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "MainViewController.h"

@implementation MainViewController

@synthesize data = _data;

- (id)initWithStyle:(UITableViewStyle)style {
    self = [super initWithStyle:style];
    if (self) {
        
    }
    return self;
}

- (void)dealloc {
    [super dealloc];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

#pragma mark - Buttons

- (void)editPressed:(id)sender {
    NSArray *paths = [NSArray arrayWithObject:[NSIndexPath indexPathForRow:[self.data count] inSection:0]];
    
    if ([self.tableView isEditing]) {
        [super setEditing:NO animated:YES];
        [self.tableView setEditing:NO animated:YES];
        self.navigationItem.rightBarButtonItem.style = UIBarButtonItemStyleBordered;
        [self.tableView deleteRowsAtIndexPaths:paths withRowAnimation:UITableViewRowAnimationTop];
    }
    else {
        [super setEditing:YES animated:YES];
        [self.tableView setEditing:YES animated:YES];
        self.navigationItem.rightBarButtonItem.style = UIBarButtonItemStyleDone;
        [self.tableView insertRowsAtIndexPaths:paths withRowAnimation:UITableViewRowAnimationTop];
    }
}

#pragma mark - View lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.navigationItem setTitle:@"Bitcoin"];
    [self.navigationItem setRightBarButtonItem:[[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemEdit target:self action:@selector(editPressed:)]];
    
    // Create our Data Array
    self.data = [[NSMutableArray new] autorelease];
    
    // Insert some Dummy Data
    [self.data addObject:@"MTGox"];
    [self.data addObject:@"BTCGuild"];
 }

- (void)viewDidUnload {
    [super viewDidUnload];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if ([self.tableView isEditing]) {
        return [self.data count] + 1;
    }
    return [self.data count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *CellIdentifier = @"Cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier] autorelease];
        [cell.textLabel setAdjustsFontSizeToFitWidth:YES];
    }
    
    if ([self.tableView isEditing] && indexPath.row == [self.data count]) {
        cell.textLabel.text = @"Add Ticker/Pool/Wallet";
        return cell;
    }
    
    cell.textLabel.text = [self.data objectAtIndex:indexPath.row];
    
    return cell;
}

/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

- (UITableViewCellEditingStyle)tableView:(UITableView *)tableView editingStyleForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (![self.tableView isEditing])
        return UITableViewCellEditingStyleNone;
    
    if (indexPath.row == [self.data count]) {
        return UITableViewCellEditingStyleInsert;
    }
    else {
        return UITableViewCellEditingStyleDelete;
    }
}

- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        //[tableView deleteRowsAtIndexPaths:[NSArray arrayWithObject:indexPath] withRowAnimation:UITableViewRowAnimationFade];
        NSLog(@"Delete Cell At: %@",indexPath);
    }   
    else if (editingStyle == UITableViewCellEditingStyleInsert) {
        NSLog(@"Add New Cell");
    }
}

- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath {
    
}


- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    /*
        Research Further: We have the "ADD" cell on the bottom, but 
        if you rearrange one of the other cells to be below this one, shit fucks up.
        How do we prevent/fix this?
     */
    if ([self.tableView isEditing] && indexPath.row == [self.data count])
        return NO;
    return YES;
}


#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {

}

@end
