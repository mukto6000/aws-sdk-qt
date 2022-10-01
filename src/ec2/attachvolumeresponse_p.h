// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVOLUMERESPONSE_P_H
#define QTAWS_ATTACHVOLUMERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AttachVolumeResponse;

class AttachVolumeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AttachVolumeResponsePrivate(AttachVolumeResponse * const q);

    void parseAttachVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachVolumeResponse)
    Q_DISABLE_COPY(AttachVolumeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
