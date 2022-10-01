// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALSETTINGSRESPONSE_H
#define QTAWS_UPDATEGLOBALSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "updateglobalsettingsrequest.h"

namespace QtAws {
namespace Chime {

class UpdateGlobalSettingsResponsePrivate;

class QTAWSCHIME_EXPORT UpdateGlobalSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateGlobalSettingsResponse(const UpdateGlobalSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGlobalSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGlobalSettingsResponse)
    Q_DISABLE_COPY(UpdateGlobalSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
