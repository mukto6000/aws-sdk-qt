// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTANOMALIESREQUEST_P_H
#define QTAWS_DETECTANOMALIESREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "detectanomaliesrequest.h"

namespace QtAws {
namespace LookoutVision {

class DetectAnomaliesRequest;

class DetectAnomaliesRequestPrivate : public LookoutVisionRequestPrivate {

public:
    DetectAnomaliesRequestPrivate(const LookoutVisionRequest::Action action,
                                   DetectAnomaliesRequest * const q);
    DetectAnomaliesRequestPrivate(const DetectAnomaliesRequestPrivate &other,
                                   DetectAnomaliesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectAnomaliesRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
