// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELRESPONSE_H
#define QTAWS_DESCRIBECHANNELRESPONSE_H

#include "medialiveresponse.h"
#include "describechannelrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeChannelResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeChannelResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeChannelResponse(const DescribeChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelResponse)
    Q_DISABLE_COPY(DescribeChannelResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
