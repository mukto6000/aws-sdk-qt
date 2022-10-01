// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERRESPONSE_H
#define QTAWS_DELETEMEMBERRESPONSE_H

#include "macie2response.h"
#include "deletememberrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteMemberResponsePrivate;

class QTAWSMACIE2_EXPORT DeleteMemberResponse : public Macie2Response {
    Q_OBJECT

public:
    DeleteMemberResponse(const DeleteMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMemberResponse)
    Q_DISABLE_COPY(DeleteMemberResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
