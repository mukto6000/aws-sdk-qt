// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFOLDERSREQUEST_H
#define QTAWS_SEARCHFOLDERSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchFoldersRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT SearchFoldersRequest : public QuickSightRequest {

public:
    SearchFoldersRequest(const SearchFoldersRequest &other);
    SearchFoldersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFoldersRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
