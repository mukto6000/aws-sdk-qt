// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVOLUMERESPONSE_H
#define QTAWS_ATTACHVOLUMERESPONSE_H

#include "ec2response.h"
#include "attachvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class AttachVolumeResponsePrivate;

class QTAWSEC2_EXPORT AttachVolumeResponse : public Ec2Response {
    Q_OBJECT

public:
    AttachVolumeResponse(const AttachVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachVolumeResponse)
    Q_DISABLE_COPY(AttachVolumeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
