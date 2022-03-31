//
//  ReleaseGameView.h
//  YueQiu
//
//  Created by 张佳乔 on 2022/2/26.
//

#import <UIKit/UIKit.h>
#import <AMapSearchKit/AMapSearchKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface ReleaseGameView : UIView
<UITextFieldDelegate,
UITableViewDelegate,
UITableViewDataSource,
CLLocationManagerDelegate,
AMapSearchDelegate>
@property (nonatomic, strong) UIImageView *locationImageView;  //位置图标
@property (nonatomic, strong) UIImageView *timeImageView;  //时间图标

@property (nonatomic, strong) UITextField *locationTextField;  //位置
@property (nonatomic, strong) UIDatePicker *showDatePicker;  //时间选择器

@property (nonatomic, strong) UITextField *contentTextField;  //内容框

@property (nonatomic, strong) UIButton *sendButton;  //发表按钮

@property (nonatomic, strong) UITableView* tableView;

@property (nonatomic, strong) NSMutableArray* searchArray;
@property (nonatomic, strong) NSMutableArray* locationArray;
@property (nonatomic, strong) NSMutableArray* distanceArray;
@property (nonatomic, strong) NSMutableArray* typeAndPlaceArray;
@property (nonatomic, retain) CLLocation *myLocation;  //我的位置
@property (nonatomic) AMapSearchAPI* search;
@property (strong, nonatomic) CLLocationManager *getLocation;

@end

NS_ASSUME_NONNULL_END
