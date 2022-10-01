// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRESETRESPONSE_H
#define QTAWS_DELETEPRESETRESPONSE_H

#include "mediaconvertresponse.h"
#include "deletepresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class DeletePresetResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT DeletePresetResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    DeletePresetResponse(const DeletePresetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePresetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePresetResponse)
    Q_DISABLE_COPY(DeletePresetResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
