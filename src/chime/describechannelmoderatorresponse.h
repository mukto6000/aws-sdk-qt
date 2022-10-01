// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATORRESPONSE_H
#define QTAWS_DESCRIBECHANNELMODERATORRESPONSE_H

#include "chimeresponse.h"
#include "describechannelmoderatorrequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelModeratorResponsePrivate;

class QTAWSCHIME_EXPORT DescribeChannelModeratorResponse : public ChimeResponse {
    Q_OBJECT

public:
    DescribeChannelModeratorResponse(const DescribeChannelModeratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelModeratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelModeratorResponse)
    Q_DISABLE_COPY(DescribeChannelModeratorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
