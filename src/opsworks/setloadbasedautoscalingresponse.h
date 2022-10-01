// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBASEDAUTOSCALINGRESPONSE_H
#define QTAWS_SETLOADBASEDAUTOSCALINGRESPONSE_H

#include "opsworksresponse.h"
#include "setloadbasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class SetLoadBasedAutoScalingResponsePrivate;

class QTAWSOPSWORKS_EXPORT SetLoadBasedAutoScalingResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    SetLoadBasedAutoScalingResponse(const SetLoadBasedAutoScalingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetLoadBasedAutoScalingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoadBasedAutoScalingResponse)
    Q_DISABLE_COPY(SetLoadBasedAutoScalingResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
