// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLAUNCHRESPONSE_H
#define QTAWS_STOPLAUNCHRESPONSE_H

#include "evidentlyresponse.h"
#include "stoplaunchrequest.h"

namespace QtAws {
namespace Evidently {

class StopLaunchResponsePrivate;

class QTAWSEVIDENTLY_EXPORT StopLaunchResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    StopLaunchResponse(const StopLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopLaunchResponse)
    Q_DISABLE_COPY(StopLaunchResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
