#import <UIKit/UIKit.h>

@interface UsersTableViewController : UITableViewController <NSNetServiceBrowserDelegate>

@property (strong, nonatomic) NSMutableArray *services;

@property (strong, nonatomic) NSNetServiceBrowser *netServiceBrowser;

//@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
