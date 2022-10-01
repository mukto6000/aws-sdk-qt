// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSREQUEST_H
#define QTAWS_LISTFINDINGSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class ListFindingsRequestPrivate;

class QTAWSINSPECTOR2_EXPORT ListFindingsRequest : public Inspector2Request {

public:
    ListFindingsRequest(const ListFindingsRequest &other);
    ListFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
