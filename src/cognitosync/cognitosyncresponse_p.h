// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOSYNCRESPONSE_P_H
#define QTAWS_COGNITOSYNCRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class CognitoSyncResponse;

class CognitoSyncResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CognitoSyncResponsePrivate(CognitoSyncResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CognitoSyncResponse)
    Q_DISABLE_COPY(CognitoSyncResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
