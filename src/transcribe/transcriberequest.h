/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_TRANSCRIBEREQUEST_H
#define QTAWS_TRANSCRIBEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawstranscribeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Transcribe {

class TranscribeRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT TranscribeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Transcribe.
    enum Action {
        CreateCallAnalyticsCategoryAction,
        CreateLanguageModelAction,
        CreateMedicalVocabularyAction,
        CreateVocabularyAction,
        CreateVocabularyFilterAction,
        DeleteCallAnalyticsCategoryAction,
        DeleteCallAnalyticsJobAction,
        DeleteLanguageModelAction,
        DeleteMedicalTranscriptionJobAction,
        DeleteMedicalVocabularyAction,
        DeleteTranscriptionJobAction,
        DeleteVocabularyAction,
        DeleteVocabularyFilterAction,
        DescribeLanguageModelAction,
        GetCallAnalyticsCategoryAction,
        GetCallAnalyticsJobAction,
        GetMedicalTranscriptionJobAction,
        GetMedicalVocabularyAction,
        GetTranscriptionJobAction,
        GetVocabularyAction,
        GetVocabularyFilterAction,
        ListCallAnalyticsCategoriesAction,
        ListCallAnalyticsJobsAction,
        ListLanguageModelsAction,
        ListMedicalTranscriptionJobsAction,
        ListMedicalVocabulariesAction,
        ListTagsForResourceAction,
        ListTranscriptionJobsAction,
        ListVocabulariesAction,
        ListVocabularyFiltersAction,
        StartCallAnalyticsJobAction,
        StartMedicalTranscriptionJobAction,
        StartTranscriptionJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCallAnalyticsCategoryAction,
        UpdateMedicalVocabularyAction,
        UpdateVocabularyAction,
        UpdateVocabularyFilterAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    TranscribeRequest(const Action action);
    TranscribeRequest(const TranscribeRequest &other);
    TranscribeRequest &operator=(const TranscribeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const TranscribeRequest &other) const;


protected:
    /// @cond internal
    explicit TranscribeRequest(TranscribeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranscribeRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
