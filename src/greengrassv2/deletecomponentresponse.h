// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTRESPONSE_H
#define QTAWS_DELETECOMPONENTRESPONSE_H

#include "greengrassv2response.h"
#include "deletecomponentrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteComponentResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT DeleteComponentResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    DeleteComponentResponse(const DeleteComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteComponentResponse)
    Q_DISABLE_COPY(DeleteComponentResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
