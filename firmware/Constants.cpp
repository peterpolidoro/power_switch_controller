// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace constants
{
const int baudrate = 9600;

const int model_number = 1110;
const int firmware_number = 1;

const int cs_pin = 49;
const int in_pin = 48;
const int led_pwr_pin = 18;

const int ic_count = 4;
const int channel_count = 32;

const long channel_min = 0;
const long channel_max = channel_count-1;

const uint32_t states_default[STATE_COUNT] = {0};

FLASH_STRING(device_name,"power_switch_controller");
FLASH_STRING(get_leds_powered_method_name,"getLedsPowered");
FLASH_STRING(set_channel_on_method_name,"setChannelOn");
FLASH_STRING(set_channel_off_method_name,"setChannelOff");
FLASH_STRING(set_channels_on_method_name,"setChannelsOn");
FLASH_STRING(set_channels_off_method_name,"setChannelsOff");
FLASH_STRING(toggle_channel_method_name,"toggleChannel");
FLASH_STRING(toggle_channels_method_name,"toggleChannels");
FLASH_STRING(toggle_all_channels_method_name,"toggleAllChannels");
FLASH_STRING(set_all_channels_on_method_name,"setAllChannelsOn");
FLASH_STRING(set_all_channels_off_method_name,"setAllChannelsOff");
FLASH_STRING(set_channel_on_all_others_off_method_name,"setChannelOnAllOthersOff");
FLASH_STRING(set_channel_off_all_others_on_method_name,"setChannelOffAllOthersOn");
FLASH_STRING(set_channels_on_all_others_off_method_name,"setChannelsOnAllOthersOff");
FLASH_STRING(set_channels_off_all_others_on_method_name,"setChannelsOffAllOthersOn");
FLASH_STRING(get_channels_on_method_name,"getChannelsOn");
FLASH_STRING(get_channels_off_method_name,"getChannelsOff");
FLASH_STRING(get_channel_count_method_name,"getChannelCount");
FLASH_STRING(save_state_method_name,"saveState");
FLASH_STRING(recall_state_method_name,"recallState");
FLASH_STRING(get_saved_states_method_name,"getSavedStates");
FLASH_STRING(channels_parameter_name,"channels");
FLASH_STRING(channel_parameter_name,"channel");
FLASH_STRING(state_parameter_name,"state");
FLASH_STRING(states_name,"states");
}
