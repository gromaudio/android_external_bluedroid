/******************************************************************************
 *
 *  Copyright (C) 2014 Tieto Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

/******************************************************************************
 *
 *  SBC decoder stub
 *
 ******************************************************************************/
#include "sbc_decoder.h"

void SBC_Decoder(SBC_DEC_PARAMS *pstrDecParams)
{
    pstrDecParams->s16PcmLength      = 0;
    pstrDecParams->s16SbcFrameLength = 0;
}

void SBC_Decoder_Init(SBC_DEC_PARAMS *pstrDecParams)
{
}

